#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,m,flag=0;
    cin>>n>>m;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(m%a[i]==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    return 0;
}