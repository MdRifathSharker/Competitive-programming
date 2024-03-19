#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>v(n);
        for(auto &i:v){
            cin>>i.first;
        }
        int mx=0;
        for(auto &i:v){
            cin>>i.second;
            if(mx<i.second){
                mx=i.second;
            }
        }
        int c=0,sum=0,sum1=0,flag=0;
        for(int i=0;i<n-1;i++){
            if(v[i].first>v[i+1].first||sum1>v[i].first){
                sum1=0;
                c++;
                sum+=v[i].first;
            }
            else{
                while(sum1>v[i+1].first){
                    c++;
                    sum+=v[i].second;
                    sum1+=v[i].second;
                    if(c==k){
                        break;
                    }
                }
            }
            if(c==k){
                flag=1;
                break;
            }
        }
        if(flag==0){
            sum=sum+(k-c)*mx;
        }
        cout<<sum<<endl;
    }
    return 0;
}