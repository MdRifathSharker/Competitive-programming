#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]=a[i]+i+1;
        }
        sort(a,a+n);
        for(int i=n-1;i>=0;i--){
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }

    return 0;
}