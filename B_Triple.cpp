#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n,ans=-1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i]==a[i+1]&&a[i]==a[i+2]){
                ans=a[i];
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}