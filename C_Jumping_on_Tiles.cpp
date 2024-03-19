#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int n=a.size();
        vector<pair<int,int>>p(n);
        for(int i=0;i<n;i++){
            p[i].first=a[i]-'a'+1;
            p[i].second=i+1;
        }
        sort(p.begin(),p.end());
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum=sum+(abs(p[i].first-p[i+1].first));
        }
        cout<<sum<<endl;
        /*for(auto &i: p){
            cout<<i.first<<' '<<i.second<<endl;
        }*/
    }

    return 0;
}