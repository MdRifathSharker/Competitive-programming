#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a,a+2*n);
        long long int ans=0;
        for(int i=0;i<2*n;i+=2){
            ans=ans+min(a[i],a[i+1]);
        }
        cout<<ans<<endl;
    }

    return 0;
}