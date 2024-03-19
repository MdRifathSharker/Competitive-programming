#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<char>v(n);
        for(auto &i: v){
            cin>>i;
        }
        map<char,int>m;
        for(auto &i:v){
            m[i]++;
        }
        for(auto &i:m){
            cout<<i.first<<" "<<i.second<<endl;
        }
        cout<<endl;
    }
    return 0;
}