#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int input;
    cin >> input;

    int number1, number2;
    for(int i = 0; i < input; i++)
    {
        cin >> number1 >> number2;
        cout << (number1 + number2) << endl;
    }

    return 0;
    
}