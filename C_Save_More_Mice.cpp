#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int sum=0,c=0;
        for(int i=n-1;i>=0;i--){
            sum=sum+(x-a[i]);
            c++;
            if(sum>=x){
                c--;
                break;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}