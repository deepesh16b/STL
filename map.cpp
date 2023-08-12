#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> m; //ordered/ sorted
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        m[s]++; // m[s] = m[s] + 1
    }
    
    for(auto i : m)
        cout<<i.first<<" - "<<i.second<<endl; // lexicological order
    
    m["abcd"] = 3;           // O(log(n))
    m.insert({"dbca", 2});   // O(log(n))

    m.erase("abcd");
    
    
    auto i = m.find("abcd"); // return iterator of found key else points to m.end()  ||     // O(log(n))
    
    if(i != m.end())
        cout<<i->first<<" "<<(*i).second;     // syntax of iterator ki value
    else    
        cout<<"NO VALUE";
    
    
    m.clear();
    
    return 0;
}