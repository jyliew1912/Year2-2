#include <iostream>

using namespace std;
double innetCalculate(int m);
double outnetCalculate(int m);
int main()
{
    int inputNumber;
    
    cin >> inputNumber;
    
    int innet, outnet;
    for(int i = 0; i < inputNumber; i++)
    {
        cin >> innet >> outnet;
        
        double prize = innetCalculate(innet);
        prize += outnetCalculate(outnet);
        
        cout << (int)prize << endl;
    }
}

double innetCalculate(int m)
{
    double prize = (double)m * 3;
    if(m <= 300) return prize;
    else if(m <= 500) return prize * 0.9;
    else if(m <= 1000) return prize * 0.75;
    else return prize * 0.5;
}

double outnetCalculate(int m)
{
    double prize = (double)m * 6;
    if(m <= 500) return prize;
    else if(m <= 1000) return prize * 0.9;
    else return prize * 0.75;
}