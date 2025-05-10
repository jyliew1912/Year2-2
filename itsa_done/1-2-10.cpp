#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int input;
    cin >> input;

    double kilom = input * 1.6;
    kilom = round(kilom * 10) / 10.0;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout << "km=" << kilom << endl;
    return 0;
}