#include <iostream>

using namespace std;
bool ziyin(char ch);
int main()
{
    char character;
    cin >> character;

    character = tolower(character);
    if(ziyin(character))
    {
        cout << "子音" << endl;
    }
    else 
    {
        cout << "母音" << endl;
    }
}

bool ziyin(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return 0;
    return 1;
}