#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> p;

    //---------------------------------
    // General Operations
    //---------------------------------

    // Insert
    p.push(7);
    p.push(14);
    p.push(10);
    p.push(2);

    // Access
    int top = p.top(); // 'Top' element - 14 here

    // Iterate
    cout << "Priority Queue: ";
    while (!p.empty())
    {
        cout << p.top() << ", ";
        p.pop();
    }

    // Size
    unsigned int size = p.size();

    // Remove
    // p.pop(); //

    return 0;
}