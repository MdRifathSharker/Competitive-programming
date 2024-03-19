#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<pair<long long int,long long int>>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i].first;
            p[i].second=i+1;
        }
        sort(p.begin(),p.end());
        long long sum=p[1].first+p[0].first+p[1].second-p[0].second;
        cout<<sum;
    }
    return 0;
}