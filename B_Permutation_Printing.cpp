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
        if(n%2==0){
            int c=n,x=1;
            for(int i=0;i<n;i+=2){
                a[i]=c;
                c-=2;
                a[i+1]=x;
                x+=2;
            }
        }
        else{
            int c=n-1,x=1;
            for(int i=0;i<n;i+=2){
                a[i]=c;
                c-=2;
                a[i+1]=x;
                x+=2;
            }
            a[n-1]=n;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}