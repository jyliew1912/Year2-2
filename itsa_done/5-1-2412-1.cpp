#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int input;
    cin >> input;
    
    double arr[input];
    double totalAmount, amountPerMinute;
    for(int i = 0; i < input; i++)
    {
        cin >> totalAmount >> amountPerMinute;
        
        double timeNeeded = totalAmount / amountPerMinute;
        arr[i] = timeNeeded / 60.0;
    }
    
    double min = arr[0];
    for(int i = 1; i < input; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    cout << min << endl;
    
    return 0;
}
