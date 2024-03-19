#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n],max=0,h;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    while(c<n){
        c=0;
        for(int i=0;i<n;i++){
            if(a[i]>0){
                max=i;
            }
            if(a[i]>=0){
                a[i]-=x;
            }
            if(a[i]<=0){
                c++;
            }
        }
    }
    cout<<max+1;
    return 0;
}