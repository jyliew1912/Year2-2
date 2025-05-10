#include <iostream>

using namespace std;
int main()
{
    int input;
    cin >> input;

    int power = 10000;
    float answer;
    for(int i = 0; i < 5; i++)
    {
        answer = input;
        answer /= power;
        
        for(int j = 0; j < (int)answer; j++)
        {
            cout << "*";
        }
        cout << endl;

        input %= power;
        power /= 10;
    }

    return 0;
}