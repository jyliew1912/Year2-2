#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int skippedNumber;
    cin >> skippedNumber;
    cin.ignore(100, '\n');

    skippedNumber++;

    string inputParagraph;
    getline(cin, inputParagraph);

    for(int i = 0; i < inputParagraph.length(); i += skippedNumber) 
    {
        cout << inputParagraph[i];
    }

    cout << endl;

    return 0;
}
