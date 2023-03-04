// hashmap is a datastructure which is use to store key and value 
// pair. It is a associative container which contains key value pair
// with unique keys. In a map, key is used to identify a value and
// is immutable. In a multimap, multiple keys can be associated with
// a single value. The key values in a map are generally used to sort
// and uniquely identify the elements, while the mapped values store
// the content associated to this key. The types of key and value may
// differ, and are grouped together in member type value_type, which
// is a pair type combining both:
// 1. first: the key value (const Key)
// 2. second: the mapped value (T)
// The individual elements can be accessed through iterators or
// directly using their key values (with member function at).
// Internally, the elements in a map are always sorted by its key
// following a specific strict weak ordering criterion indicated by
// its internal comparison object (of type Compare).
// The map containers are generally slower than unordered_map
// containers to access individual elements by their key, but they
// allow the direct iteration on subsets based on their order.
#include<bits/stdc++.h>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;


int main(){
    unordered_map<int,int>m;
    m.insert(make_pair(1, 5));
    m.insert(make_pair(2, 10));
    m.insert(make_pair(3, 15));
    // cout<<m[1]<<endl;
    m[1] = 10;
    // cout<<m[1]<<endl;
    // if we want to add more then one value for one key then use vector 
    unordered_map<int,vector<int> >a;
    a[1].push_back(5);
    a[1].push_back(10);
    a[1].push_back(15);
    a[1].push_back(20);
// if we want to print map with key and value then
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // if we want to print map with key and value then
    for(auto i:a){
        cout<<"map key : "<<i.first<<endl;
        for(auto j:i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //Let's look how you can check does the particular key exists or not:
    if(m.find(10) != m.end()){
        cout<<"Key exists"<<endl;
    }
    else{
        cout<<"Key does not exist"<<endl;
    }
    // if we want to delete key and value then
    m.erase(1);
    return 0;


}