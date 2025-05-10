#include <iostream>
#include <string>
using namespace std;

void break_out(string str);
int main()
{
    int N;
    cin >> N;
    string input;
    for(int i = 0; i < N; i++)
    {
        cin >> input;
        break_out(input);
    }
    return 0;
}

void break_out(string str)
{
    if(str[0] == '0' && str[1] == '1') cout << "East ";
    else if(str[0] == '1' && str[1] == '1') cout << "West ";
    else if(str[0] == '1' && str[1] == '0') cout << "South ";
    else if(str[0] == '0' && str[1] == '0') cout << "North ";

    if(str[2] == '0' && str[3] == '0' && str[4] == '1') cout << "30 ";
    else if(str[2] == '1' && str[3] == '1' && str[4] == '0') cout << "45 ";
    else if(str[2] == '1' && str[3] == '0' && str[4] == '0') cout << "60 ";
    else if(str[2] == '0' && str[3] == '1' && str[4] == '0') cout << "75 ";
    cout << "Degrees ";

    if(str[5] == '0' && str[6] == '1' && str[7] == '0' && str[8] == '0') cout << "25";
    else if(str[5] == '1' && str[6] == '1' && str[7] == '0' && str[8] == '0') cout << "70";
    else if(str[5] == '1' && str[6] == '0' && str[7] == '1' && str[8] == '0') cout << "55";
    else if(str[5] == '0' && str[6] == '1' && str[7] == '1' && str[8] == '0') cout << "10";
    cout << "0 Miles" << endl;
}