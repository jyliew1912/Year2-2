#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int input;
    cin >> input;

    int counting1, counting2;
    for (int i = 0; i < input; i++)
    {
        cin >> counting1 >> counting2;
        int sum = counting1 + counting2;
        cout << (sum * sum) << endl;
    }
    return 0;
}