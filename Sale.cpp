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
        long long int c=0;
        long long int b[n+1],c1=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            c+=a[i];
            b[i]=c;
        }
        for(int i=0;i<n;i++){
            b[i]+=a[i];
        }
        sort(b,b+n);
        cout<<b[n-1]<<endl;
    }

    return 0;
}

