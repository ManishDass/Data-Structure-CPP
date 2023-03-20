#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    //---------------------------------
    // General Operations
    //---------------------------------

    // Insert
    q.push(23);
    q.push(18);

    // Access head, tail
    int head = q.front(); // head
    int tail = q.back();  // tail

    // Size
    unsigned int size = q.size();

    // Remove
    q.pop();
    return 0;
}