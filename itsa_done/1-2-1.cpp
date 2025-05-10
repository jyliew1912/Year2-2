# include <iostream>
# include <cmath>

using namespace std;
int main()
{
    int x = 0;
    int y = 0;

    cin >> x >> y;
    
    double area = (x * y) / 2.0;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "Triangle area:" << area << endl;

    return 0;

}
