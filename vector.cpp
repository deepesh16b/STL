#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v (3, 0);
    v.push_back(1);
    v.pop_back();
    v.push_back(2);
    for(auto i: v)  cout<<i<<" ";
    cout<<endl;

    
    //======= IMPORTANT =============
    vector<int> arr = v;
    arr.push_back(3);
    for(auto i: arr)  cout<<i<<" ";

    return 0;
}