#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n],c=-1;
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(a[i]==a[j]){
                a[j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=-1){
            c++;
            b[c]=a[i];
        }
    }
    cout<<c+1<<endl;
    for(int i=0;i<=c;i++){
        cout<<b[i]<<' ';
    }
    return 0;
}