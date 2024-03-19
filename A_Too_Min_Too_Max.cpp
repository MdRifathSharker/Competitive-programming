#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    while(x--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<2;i++){
            sum=sum+abs(a[i]-a[n-i-1]);
        }
        cout<<sum*2<<endl;
    }
    return 0;
}