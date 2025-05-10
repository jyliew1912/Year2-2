#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int input;
    cin >> input;

    int sum = 0;
    for(int i = 1; i <= input; i++)
    {
        if(i % 6 == 0)
        {
            sum += i;
            if(i % 12 == 0) sum -= i;
        }
    }

    cout << sum << endl;
}