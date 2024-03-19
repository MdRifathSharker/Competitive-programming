#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(auto &i:v){
        cin>>i.first>>i.second;
    }
    for(auto &i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}