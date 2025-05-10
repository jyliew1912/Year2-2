#include <iostream>
#include <cmath>

using namespace std;
int sumof(int n);
int factorize(int n);
int main()
{
    int count, input;
    cin >> count;
    for(int i = 0; i < count; i++) 
    {
        cin >> input;
        int N = sumof(input);
        int S = factorize(N);

        if(S > N) cout << -1 << endl;
        else if( S == N) cout << 0 << endl;
        else cout << (N - S) << endl;
    }

}
int sumof(int n)
{
    int value = 0;
    for(int i = 7; i >= 0; i--)
    {
        int divisor = pow(10, i);
        value += (n / divisor);
        n %= divisor;
    }
    return value;
}

int factorize(int n)
{
    int total = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0) total += i;
    }
    return total;
}