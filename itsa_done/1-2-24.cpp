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

        int first = (number1 > number2) ? number1 : number2;
        int second = (number1 > number2) ? number2 : number1;

        int sum = 0;
        for(int i = second; i <= first; i++)
        {
            sum += i;
        }

        cout << sum << endl;
    }

    return 0;
}