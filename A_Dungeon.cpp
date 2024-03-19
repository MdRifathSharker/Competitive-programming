#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        long long int a[3],sum=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
            sum=a[i]+sum;
        }
        int sum1=sum/9;
        if(a[0]>=sum1&&a[1]>=sum1&&a[2]>=sum1&&sum%9==0){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }

    return 0;
}