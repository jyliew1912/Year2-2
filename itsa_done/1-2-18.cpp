#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int day = 24 * 60 * 60;
    int hour = 60 * 60;
    int minute = 60;

    int input;
    cin >> input;

    int output = input / day;

    cout << output << " days" << endl;
    input -= (output * day);

    output = input / hour;

    cout << output << " hours" << endl; 
    input -= (output * hour);

    output = input / minute;

    cout << output << " minutes" << endl;
    input -= (output * minute);

    cout << input << " seconds" << endl;

    return 0;
}