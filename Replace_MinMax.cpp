#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(a[i]==b[0]){
            a[i]=b[n-1];
        }
        else if(a[i]==b[n-1]){
            a[i]=b[0];
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}