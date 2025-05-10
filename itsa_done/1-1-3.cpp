#include <iostream>

using namespace std;
int main()
{
    int input;
    cin >> input;

    int power = 10;
    float answer;
    for(int i = 0; i < 4; i++)
    {
        answer = input % power;
        answer /= (power / 10);

        cout << (int)answer;

        if(i != 3)
        {
            cout << ",";
        }
        else 
        {
            cout << endl;
        }

        power *= 10;
    }
    
    return 0;
}