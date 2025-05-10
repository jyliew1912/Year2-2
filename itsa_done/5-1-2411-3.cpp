#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm> // for sort

using namespace std;

int findBase(int h);
int main() {
    int N;
    cin >> N;

    vector<pair<string, int>> members;

    for (int i = 0; i < N; i++) 
    {
        string name;
        int height, sum1, sum2, sum3, sum4, sum5;
        cin >> name >> height >> sum1 >> sum2 >> sum3 >> sum4 >> sum5;
        int total_sum = (sum1 + sum2 + sum3 + sum4 + sum5) * 20;
        int base = findBase(height);
        int marks = base + total_sum;
        members.push_back({name, marks});
    }

    sort(members.begin(), members.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; // Sort by marks (descending)
    });

    for (const auto& member : members) {
        cout << member.first << endl; 
    }

    return 0;
}

int findBase(int h) 
{
    int standard = 170;
    int base = 1000;
    if(h == standard) return base;
    else if(h > standard)
    {
        while(standard < h)
        {
            standard++;
            base += 100;
        }
    }
    else if(h < standard)
    {
        while(h < standard)
        {
            h++;
            base -= 100;
        }
    }
    return base;;
}