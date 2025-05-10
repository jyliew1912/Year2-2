#include <iostream>

using namespace std;
int main()
{
    int input;
    cin >> input;

    if(input > 0)
    {
        cout << "正數" << endl;
    }
    else if(input == 0) 
    {
        cout << "0" << endl;
    }
    else 
    {
        cout << "負數" << endl;
    }

    return 0;
}