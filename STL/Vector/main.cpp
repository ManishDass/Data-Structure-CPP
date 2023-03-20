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



