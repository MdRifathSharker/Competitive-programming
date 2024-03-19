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
        sort(a,a+n);
        int odd=0,even=0,x=0,y=0,z=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
            if(a[i]+1==a[i+1]&&i+1<n){
                x++;
            }
            else if(a[i]==a[i+1]&&i+1<n&&a[i]%2==0){
                y++;
            }
            else if(a[i]==a[i+1]&&i+1<n&&a[i]%2!=0){
                z++;
            }
        }
        even=even-x;
        odd=odd-x;
        if(even%2==0&&odd%2==0||y==z&&y!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}