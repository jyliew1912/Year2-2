#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int input;
    cin >> input;

    int x;
    for(int i = 0; i < input; i++)
    {
        cin >> x;
        cout << (x) << " "
            << (x * x) << " "
            << (x * x * x) << endl;

    }
    return 0;
}
