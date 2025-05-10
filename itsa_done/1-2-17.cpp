#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int original, count;
    cin >> original >> count;

    double counting = (double)count;
    double score = 0;
    if(original <= 60)
    {
        score = counting * original;
    }
    else if(original <= 120)
    {
        score = counting * 60 + counting * 1.33 * (original - 60);
    }
    else
    {
        score = counting * 60 + counting * 1.33 * 60 + counting * 1.66 * (original - 120);
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout << score << endl;

    return 0;
}