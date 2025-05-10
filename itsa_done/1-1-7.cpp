#include <iostream>

using namespace std;
void uptri();
void downtri();
void empty();
int main()
{
    int input;
    cin >> input;
    switch(input)
    {
        case 1:
            empty();
            break;
        case 2:
            uptri();
            break;
        default:
            downtri();
            break;
    }
}

void uptri()
{
    int first = 1;
    int second = 4;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < second; j++)
        {
            cout << " ";
        }

        for(int m = 0; m < first; m++)
        {
            cout << "*";
        }
        first += 2;
        second--;
        
        cout << endl;
    }
}

void downtri()
{
    int first = 9;
    int second = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < second; j++) 
        {
            cout << " ";
        }
        for(int m = 0; m < first; m++) 
        {
            cout << "*";
        }
        first -=2;
        second++;

        cout << endl;
    }
}

void empty()
{
    int first = 1;
    int second = 4;
    for(int i = 1; i < 5; i++)
    {
        for(int j = 0; j < second; j++)
        {
            cout << " ";
        }
        for(int m = 0; m < first; m++)
        {
            if(m == 0 || m == first - 1) 
            {
                cout << "*";
            }
            else 
            {
                cout << " ";
            }
        }
        first += 2;
        second--;
        cout << endl;
    }

    for(int m = 0; m < first; m++)
    {
        cout << "*";
    }
    
    cout << endl;
}