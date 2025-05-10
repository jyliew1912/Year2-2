#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int input;
    cin >> input;

    int binary[8];
    for(int i = 0; i < 8; i++)
    {
        binary[i] = 0;
    }

    int count = (input > 0) ? input : 0 - input;
    int indexing = 0;
    while(count > 0)
    {
        binary[indexing] = count % 2;
        count /= 2;
        indexing++;
    }
    
    for(int i = 0; i < 8 - indexing; i++)
    {
        if(input < 0)
        {
            cout << "1";
        }
        else 
        {
            cout << "0";
        }
    }

    for(int i = indexing - 1; i >= 0; i--)
    {
        cout << binary[i];
    }
    
    cout << endl;

    return 0;
}