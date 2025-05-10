#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double input;
    cin >> input;

    double output = input * 1.8 + 32.0;
    output = round(output * 10) / 10.0;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout << output << endl;
    return 0;
}