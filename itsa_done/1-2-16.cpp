#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int hour1, hour2, minute1, minute2;
    cin >> hour1 >> minute1 >> hour2 >> minute2;

    if(hour2 == 0)
    {
        hour2 = 24;
    }

    int time1 = hour1 * 60 + minute1;
    int time2 = hour2 * 60 + minute2;

    int between = time2 - time1;
    between = between / 30.0;

    int price = 0;
    if(between <= 4)
    {
        price = between * 30;
    }
    else if(between <= 8)
    {
        price = 4 * 30 + (between - 4) * 40;
    }
    else
    {
        price = 4 * 30 + 4 * 40 + (between - 8) * 60;
    }

    cout << price << endl;
    
    
    return 0;
}