#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Product {
    int index;
    int A;
    int B;
};


bool compareA(const Product &p1, const Product &p2) 
{
    return p1.A > p2.A;
}

bool compareB(const Product &p1, const Product &p2) 
{
    return p1.B > p2.B;
}

int main() 
{
    int totalNumber, topKth;
    cin >> totalNumber >> topKth;

    // Create a product vector: products[totalNumber]
    vector<Product> products(totalNumber);
    
    // Take the input
    for(int i = 0; i < totalNumber; i++) 
    {
        cin >> products[i].A >> products[i].B;
        products[i].index = i + 1;  // product's index = 1,2,3...
    }

    // sort using algorithm and compare by votes A
    sort(products.begin(), products.end(), compareA);

    // Create a top Kth vector: topK[size K]
    vector<Product> topK(products.begin(), products.begin() + topKth);
    
    // sort using algprithm and compare by votes B
    sort(topK.begin(), topK.end(), compareB);

    // Output
    cout << topK[0].index << endl;

    return 0;
}
