#include<bits/stdc++.h>
using namespace std;

int main(){
    // ---Vector of Pairs-------
    vector<pair<int, int>> v = {{1,2}, {3,4}, {5,6}};
    v.push_back({7,8});
    cout<<v[0].first<<" "<<v[0].second<<endl<<endl;

    // ----Vector V1 having 5 vectors of zero size-----
    // --------fixed rows vector and varying column----------
    vector<int> v1[5];
    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            v1[i].push_back(2);
        }
    }
    for(auto i: v1){
        for(auto j: i){
            cout<<j<<" ";
        }cout<<endl;
    }

    // ----Vector V2 of vectors -----
    // --------dynamic rows and column----------
    vector<vector<int>> v2;
    int m ;
    cin>>m;

    for(int i=0;i<m;i++){
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++)
            temp.push_back(2);
        // temp vector to be pushed
        v2.push_back(temp);
    }
    for(auto i: v2){
        for(auto j: i){
            cout<<j<<" ";
        }cout<<endl;
    }

    return 0;
}