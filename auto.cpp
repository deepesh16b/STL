#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3};
    
    // ------iterator------
    vector<int> ::iterator i;
    for(i = v.begin(); i != v.end(); i++)
        cout<<(*i)<<" ";
     cout<<endl;

    // -------auto -------
    for(auto i: v) //i is an iterator, that points 1st character, auto means datatype, value copies to i , we can also use & refernce
        cout<<i<<" ";
    cout<<endl;

    return 0;
}