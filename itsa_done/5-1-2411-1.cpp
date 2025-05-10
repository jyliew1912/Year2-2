#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
    int N; // Number of loops
    cin >> N;
    for(int i = 0; i < N; i++) 
    {
        double D, A, B, C; // Distance, speedA, speedB, speedC
        cin >> D >> A >> B >> C;
        double time = D / (A + B); // Using time would be sum of speed
        double distance = C * time; // s = vt

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2); // No need round
        cout << distance << endl; 
    }
    return 0;
}