#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second=v[i].first%k;
        }
        vector<pair<int,int>>v1(n);
        for(int i=0;i<n;i++){
            v1[i].first=v[i].second;
            v1[i].second=i;
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++){
            cout<<v1[i].second+1<<' ';
        }
        cout<<endl;
    }
    return 0;
}