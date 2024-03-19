#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int x;
    cin>>x;
    while(x--){
        long long int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[n-1]-a[0]<<endl;
    }

    return 0;
}