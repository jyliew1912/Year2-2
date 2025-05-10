#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    double area = (x + y) * z / 2.0;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout << "Trapezoid area:" << area << endl;

    return 0;
}