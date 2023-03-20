### 1 Vector `std::vector`
**Use for**
* Simple storage
* Adding but not deleting
* Serialization
* Quick lookups by index
* Easy conversion to C-style arrays
* Efficient traversal (contiguous CPU caching)

**Do not use for**
* Insertion/deletion in the middle of the list
* Dynamically changing storage
* Non-integer indexing

**Time Complexity**

| Operation    | Time Complexity |
|--------------|-----------------|
| Insert Head  |          `O(n)` |
| Insert Index |          `O(n)` |
| Insert Tail  |          `O(1)` |
| Remove Head  |          `O(n)` |
| Remove Index |          `O(n)` |
| Remove Tail  |          `O(1)` |
| Find Index   |          `O(1)` |
| Find Object  |          `O(n)` |

**Example Code**
```c++
std::vector<int> v;

//---------------------------------
// General Operations
//---------------------------------

// Size
#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;

    //---------------------------------
    // General Operations
    //---------------------------------

    //Size
    int size = v.size();
    
    //Insert head, index, tail
    v.insert(v.begin(),7);          //head
    v.insert(v.begin() + 1,9);      //index - 2 is the index
    v.push_back(13);                //tail


    //access head, index, tail
    int head = v.front();           //head
    head = v[0];                    //or using array style indexing

    int index = v.at(index);        //index
    index = v[index];               //or using array style indexing

    int tail = v.back();            //tail
    tail = v[v.size() - 1];         //or using array style indexing


    //iterate
    for(vector<int>::iterator it = v.begin(); it <= v.end(); it++) {
        cout<< *it <<endl;
    }

    //delete head, index, tail
    v.erase(v.begin());             //head
    v.erase(v.begin() + index);     //index
    v.pop_back();                   //tail

    //clear
    v.clear();

}




```

-------------------------------------------------------
### 1.3 Deque `std::deque`
**Use for**
* Similar purpose of `std::vector`
* Basically `std::vector` with efficient `push_front` and `pop_front`

**Do not use for**
* C-style contiguous storage (not guaranteed)

**Notes**
* Pronounced 'deck'
* Stands for **D**ouble **E**nded **Que**ue

**Time Complexity**

| Operation    | Time Complexity |
|--------------|-----------------|
| Insert Head  |          `O(1)` 		|
| Insert Index |          `O(n) or O(1)`|
| Insert Tail  |          `O(1)` 		|
| Remove Head  |          `O(1)` 		|
| Remove Index |          `O(n)` 		|
| Remove Tail  |          `O(1)` 		|
| Find Index   |          `O(1)` 		|
| Find Object  |          `O(n)` 		|


**Example Code**
```c++
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
```
-------------------------------------------------------
-------------------------------------------------------
### 1.4 List `std::list` and `std::forward_list`
**Use for**
* Insertion into the middle/beginning of the list
* Efficient sorting (pointer swap vs. copying)

**Do not use for**
* Direct access

**Time Complexity**

| Operation    | Time Complexity |
|--------------|-----------------|
| Insert Head  |          `O(1)` |
| Insert Index |          `O(n)` |
| Insert Tail  |          `O(1)` |
| Remove Head  |          `O(1)` |
| Remove Index |          `O(n)` |
| Remove Tail  |          `O(1)` |
| Find Index   |          `O(n)` |
| Find Object  |          `O(n)` |

**Example Code**
```c++
std::list<int> l;

//---------------------------------
// General Operations
//---------------------------------

// Insert head, index, tail
l.push_front(value);                    // head
l.insert(l.begin() + index, value);     // index
l.push_back(value);                     // tail

// Access head, index, tail
int head = l.front();                                           // head
int value = std::next(l.begin(), index);		        // index
int tail = l.back();                                            // tail

// Size
unsigned int size = l.size();

// Iterate
for(std::list<int>::iterator it = l.begin(); it != l.end(); it++) {
    std::cout << *it << std::endl;
}

// Remove head, index, tail
l.pop_front();                  // head
l.erase(l.begin() + index);     // index
l.pop_back();                   // tail

// Clear
l.clear();

//---------------------------------
// Container-Specific Operations
//---------------------------------

// Splice: Transfer elements from list to list
//	splice(iterator pos, list &x)
//  	splice(iterator pos, list &x, iterator i)
//  	splice(iterator pos, list &x, iterator first, iterator last)
l.splice(l.begin() + index, list2);

// Remove: Remove an element by value
l.remove(value);

// Unique: Remove duplicates
l.unique();

// Merge: Merge two sorted lists
l.merge(list2);

// Sort: Sort the list
l.sort();

// Reverse: Reverse the list order
l.reverse();
```
-------------------------------------------------------
### 1.5 Map `std::map` and `std::unordered_map`
**Use for**
* Key-value pairs
* Constant lookups by key
* Searching if key/value exists
* Removing duplicates
* `std::map`
    * Ordered map
* `std::unordered_map`
    * Hash table

**Do not use for**
* Sorting

**Notes**
* Typically ordered maps (`std::map`) are slower than unordered maps (`std::unordered_map`)
* Maps are typically implemented as *binary search trees*

**Time Complexity**

**`std::map`**

| Operation           | Time Complexity |
|---------------------|-----------------|
| Insert              |     `O(log(n))` |
| Access by Key       |     `O(log(n))` |
| Remove by Key       |     `O(log(n))` |
| Find/Remove Value   |     `O(log(n))` |

**`std::unordered_map`**

| Operation           | Time Complexity |
|---------------------|-----------------|
| Insert              |          `O(1)` |
| Access by Key       |          `O(1)` |
| Remove by Key       |          `O(1)` |
| Find/Remove Value   |              -- |

**Example Code**
```c++
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Syntax - map<data type for Key : data type of malue> map name
    map<int, string> m;

    //---------------------------------
    // General Operations
    //---------------------------------

    // Insert
    m[12] = "Manish Das";                     // index way
    m.insert(pair<int, string>(2, "Pritam")); // second way
    m.insert(make_pair(36, "jainendra"));     // best way

    // access
    string personA = m[12];
    string personB = m.at(36);

    // Size
    int size = m.size();

    //iterate natural order
    for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
    {
        cout << (*i).first << ": " << (*i).second << endl;
    }

    //iterate reverse order 
    for( map<int,string>::reverse_iterator i = m.rbegin(); i != m.rend(); i++)  
    {  
       cout << (*i).first << ": " << (*i).second << endl;  
    }  

    // delete head, index, tail
    m.erase(36); // head

    // clear
    m.clear();
}

```
-------------------------------------------------------
### 1.6 Set `std::set`
**Use for**
* Removing duplicates
* Ordered dynamic storage

**Do not use for**
* Simple storage
* Direct access by index

**Notes**
* Sets are often implemented with binary search trees

**Time Complexity**

| Operation    | Time Complexity |
|--------------|-----------------|
| Insert       |     `O(log(n))` |
| Remove       |     `O(log(n))` |
| Find         |     `O(log(n))` |

**Example Code**
```c++
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
```
-------------------------------------------------------
### 1.7 Stack `std::stack`
**Use for**
* First-In Last-Out operations
* Reversal of elements

**Time Complexity**

| Operation    | Time Complexity |
|--------------|-----------------|
| Push         |          `O(1)` |
| Pop          |          `O(1)` |
| Top          |          `O(1)` |

**Example Code**
```c++
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
```
-------------------------------------------------------
### 1.8 Queue `std::queue`
**Use for**
* First-In First-Out operations
* Ex: Simple online ordering system (first come first served)
* Ex: Semaphore queue handling
* Ex: CPU scheduling (FCFS)

**Notes**
* Often implemented as a `std::deque`

**Example Code**
```c++
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
```
-------------------------------------------------------
### 1.9 Priority Queue `std::priority_queue`
**Use for**
* First-In First-Out operations where **priority** overrides arrival time
* Ex: CPU scheduling (smallest job first, system/user priority)
* Ex: Medical emergencies (gunshot wound vs. broken arm)

**Notes**
* Often implemented as a `std::vector`
By default, STL priority_queue gives the largest element the highest priority

**Example Code**
```c++
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
    // p.pop(); 

    return 0;
}
```
-------------------------------------------------------

