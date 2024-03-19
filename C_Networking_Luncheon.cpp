#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
            c++;
        }
    }
    cout<<c<<endl;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<'('<<i<<','<<j<<')';
        }
    }
    return 0;
}