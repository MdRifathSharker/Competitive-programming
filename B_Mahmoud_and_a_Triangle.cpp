#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int flag=0;
    for(int i=0;i<n-2;i++){
        if(i+2==n){
            break;
        }
        if(a[i]+1==a[i+1]&&a[i]+2==a[i+2]){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}