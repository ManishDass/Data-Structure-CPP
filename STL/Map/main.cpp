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
