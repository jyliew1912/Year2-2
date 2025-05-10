#include <iostream>


using namespace std;
int main()
{
    int input;
    cin >> input;

    int arr[input];
    for(int i = 0; i < input; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for(int i = 0; i < input; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << max << endl;

    return 0;
}