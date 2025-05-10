#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    // time = distance / (your speed - friend's speed)
    // your speed = 100cm/s
    // friend's speed = 30*2.54cm/s

    double friendSpeed = 30 * 2.54;
    double betweenSpeed = 100 - friendSpeed;

    int distance;
    cin >> distance;

    distance *= 100;

    double time = distance / betweenSpeed;

    cout << (int)time + 1 << endl;
}