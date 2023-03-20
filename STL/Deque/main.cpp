#include <bits/stdc++.h>
using namespace std;

int main()
{

    //Syntax - deque<dataType> variable name;
    deque<int> d;

    //---------------------------------
    // General Operations
    //---------------------------------

    // Insert head, index, tail
    d.push_front(3);                  //head
    d.insert(d.begin() + 1, 5);       //index
    d.push_back(7);                   //tail


    // Access head, index, tail
    int head = d.front();            //head
    head = d[0];                     //or using array style indexing

    int index = d.at(2);             //index
    index = d[0];                    //or using array style indexing

    int tail = d.back();             //tail
    tail = d[0];                     //or using array style indexing

    // Size
    unsigned int size = d.size();


    // Iterate
    for(deque<int>::iterator i = d.begin(); i <= d.end() ; i++) {
        cout<< *i <<endl;
    }
    

    // Remove head, index, tail
    d.pop_front();                  //head
    d.erase(d.begin() + 2);         //index
    d.pop_back();                   //tail


    // // Clear
    // d.clear();
    return 0;
}