#include <iostream>
#define MAX 32
using namespace std;


bool check_num(char ch);
bool check_surrounding(int i, int j, char arr[][MAX]);
int counting(char arr[][MAX], char ch, int i, int j);

int main() 
{
    int N, M;
    cin >> N >> M;

    char arr[MAX][MAX] = {};

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++) cin >> arr[i][j];
    }

    for(int i = 1; i <= N; i++) 
    {
        for(int j = 1; j <= M; j++) 
        {
            if (check_num(arr[i][j])) 
            {
                if(!check_surrounding(i, j, arr)) 
                {
                    cout << "ERROR" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "PASS" << endl;
    return 0;
}

bool check_num(char ch) 
{
    return ch >= '1' && ch <= '8';
}

bool check_surrounding(int i, int j, char arr[][MAX]) 
{
    int num = arr[i][j] - '0';
    int count = counting(arr, '*', i, j);
    if(count == num) return true;

    int buffer = counting(arr, '?', i, j);
    return (count <= num) && (count + buffer >= num);
}

int counting(char arr[][MAX], char ch, int i, int j)
{
    int count = 0;
    for(int di = -1; di <= 1; di++) 
    {
        for(int dj = -1; dj <= 1; dj++) 
        {
            if(di == 0 && dj == 0) continue;
            if(arr[i + di][j + dj] == '*') count++;
        }
    }
    return count;
}