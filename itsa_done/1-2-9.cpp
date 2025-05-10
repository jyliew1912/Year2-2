#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int input;
    cin >> input;

    int value;
    for(int i = 0; i < input; i++)
    {
        cin >> value;
        if(value > 31)
        {
            cout << "Value of more than 31" << endl;
        }
        else
        {
            cout.setf(ios::fixed);
            cout.precision(0);
            cout << pow(2, value) << endl;
        }
    }
    return 0;
}