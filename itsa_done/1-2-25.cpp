#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int distance_x = (x1 - x2) * (x1 - x2);
    int distance_y = (y1 - y2) * (y1 - y2);

    double distance = (double)distance_x + distance_y;
    distance = sqrt(distance);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << distance << endl;

    return 0;
}