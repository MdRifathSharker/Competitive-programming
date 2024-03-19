#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=1;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                c++;
            }
            else{
                break;
            }
        }
        int d=1;
        for(int i=n-1;i>=1;i--){
            if(a[i]==a[i-1]){
                d++;
            }
            else{
                break;
            }
        }
        int ans;
        if(a[0]==a[n-1]){
            ans=n-(c+d);
        }
        else{
            ans=n-max(c,d);
        }
        if(ans<0){
            ans=0;
        }
        cout<<ans<<endl;
    }

    return 0;
}