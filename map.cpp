#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v){
        cin>>i;
    }
    map<int,int>mp;
    for(auto &i:v){
        mp[i]++;
    }
    for(auto &i:mp){
        cout<<i.first<<' '<<i.second<<endl;
    }
    return 0;
}