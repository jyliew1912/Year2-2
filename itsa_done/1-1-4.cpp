#include <iostream>
#include <cstring>
#define MAX_CHARACTER 20

using namespace std;
int main() 
{
    char arr[5][2][MAX_CHARACTER] = {
        {"dog", "狗"},
        {"cat", "貓"},
        {"duck", "鴨"},
        {"cow", "牛"},
        {"fox", "狐"}
    };

    char input[MAX_CHARACTER];
    cin >> input;

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            if (strcmp(input, arr[i][j]) == 0) 
            {
                cout << arr[i][!j] << endl;
                return 0;
            }
        }
    }
    return 0;
}
