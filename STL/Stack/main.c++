#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Syntax - stack<dataType> stackName
    stack<int> s;

    //---------------------------------
    // General Operations
    //---------------------------------

    // Insert
    s.push(5);
    s.push(9);

    // fetch
    int top = s.top();

    // iterate
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    // delete
    s.pop();
    return 0;
}