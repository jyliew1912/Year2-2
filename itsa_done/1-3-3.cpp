#include <iostream>

using namespace std;
bool is_prime(int n);
int main()
{
    int input;
    cin >> input;

    if(is_prime(input))
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
}

bool is_prime(int n)
{
    if(n <= 1) return 0;
    if(n == 2 || n == 3 || n == 5 || n == 7) return 1;
    if(n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) return 0;
    return 1;
}