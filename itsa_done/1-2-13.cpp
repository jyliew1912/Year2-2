#include <iostream>
#include <cmath>

using namespace std;
int main() 
{
    int weight, height;
    cin >> weight >> height;

    double height = (double)height / 100;

    double BMI = weight / (height * height);
    BMI = round(BMI * 100) / 100.0;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << BMI << endl;

    return 0;
}
