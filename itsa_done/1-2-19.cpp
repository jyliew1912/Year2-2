#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    while(y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }

    cout << x << endl;
}