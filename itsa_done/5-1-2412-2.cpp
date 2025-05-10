#include <iostream>
#include <string>

using namespace std;

string attributes[] = {"O", "A", "S", "AS"};

int fusionTable[4][4][4] = {
    // O + {O, A, S, AS}
    {{100, 0, 0, 0},
     {50, 50, 0, 0}, 
     {50, 0, 50, 0}, 
     {0, 50, 50, 0}},  
     
    // A + {O, A, S, AS}
    {{50, 50, 0, 0}, 
     {25, 75, 0, 0}, 
     {25, 25, 25, 25}, 
     {0, 50, 25, 25}},  
     
    // S + {O, A, S, AS}
    {{50, 0, 50, 0}, 
     {25, 25, 25, 25},
     {25, 0, 75, 0}, 
     {0, 25, 50, 25}}, 
     
    // AS + {O, A, S, AS}
    {{0, 50, 50, 0}, 
     {0, 50, 25, 25},
     {0, 25, 50, 25},
     {0, 25, 25, 50}}  
};

// Function to get attribute index
int getIndex(string inputAttribute) 
{
    for(int i = 0; i < 4; i++) 
    {
        if(attributes[i] == inputAttribute)
        {
            return i; // return the index of attributes[]
        }
    }
    return -1;
}

int main() 
{
    int input;
    cin >> input;
    
    string attribute1, attribute2, target;
    for(int i = 0; i < input; i++)
    {
        cin >> attribute1 >> attribute2 >> target;

        int index1 = getIndex(attribute1);
        int index2 = getIndex(attribute2);
        int indexTarget = getIndex(target);

        if(fusionTable[index1][index2][indexTarget] > 0) 
        {
            cout << fusionTable[index1][index2][indexTarget] << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
