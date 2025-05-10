#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int input;
    cin >> input;

    int ten = input / 10;
    input -= ten * 10;

    int five = input / 5;
    input -= five * 5;

    cout << "NT10=" << ten << endl;
    cout << "NT5=" << five << endl;
    cout << "NT1=" << input << endl;
    
    return 0;
}