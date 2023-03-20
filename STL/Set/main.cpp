#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::set<int> s;

    //---------------------------------
    // General Operations
    //---------------------------------

    // Insert
    s.insert(20);
    s.insert(20); // Ignores duplicates
    s.insert(21);

    // Size
    unsigned int size = s.size();

    // Iterate
    for (std::set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    // Remove
    s.erase(20);

    // Clear
    s.clear();

    //---------------------------------
    // Container-Specific Operations
    //---------------------------------

    // Find if an element exists
    bool exists = (s.find(20) != s.end());

    // Count the number of elements with a certain value
    unsigned int count = s.count(20);
    cout << "Count: " << count << endl;
}