#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int input;
    cin >> input;

    double number;
    for (int i = 0; i < input; i++)
    {
        cin >> number;
        double area = number * number;

        area = round(area * 10) / 10.0;

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        cout << area << endl;
    }
    return 0;
}