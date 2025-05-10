#include <iostream>
using namespace std;

int findNumber(int T);
int main()
{
    int N;
    cin >> N;
    
    int T = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> T;
        int count = findNumber(T);
        cout << count << endl;
    }
}

int findNumber(int T)
{
    int n = 0;
    int p = 0;
    int mine = 0;
    while(n <= T)
    {
        n++;
        p++;
        mine++;
        if(p % 3 == 0)
        {
            p++;
            n++;
        }
        if(n == T) break;
    }
    return mine;
}