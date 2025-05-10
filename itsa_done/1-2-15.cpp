#include <iostream>

using namespace std;
int main()
{
    int input;
    cin >> input;

    double price = input * 0.9;

    if(input >= 800 && input < 1500) price *= 0.9;
    else if(input >= 1500) price *= 0.79;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << price << endl;

    return 0;
}