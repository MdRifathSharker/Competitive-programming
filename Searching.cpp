#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}