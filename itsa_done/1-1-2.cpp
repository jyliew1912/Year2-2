#include <iostream>

using namespace std;
int main()
{
    int input;
    cin >> input;

    int power = 1000;
    float answer;
    for (int i = 0; i < 4; i++)
    {
        answer = input;
        answer /= power;
        
        cout << (int)answer << endl;

        input %= power;
        power /= 10;
    }

    return 0;
}