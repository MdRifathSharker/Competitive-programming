#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0,flag=0;
        int sum=sqrt(n);
        for(int i=1;i*i<=n||i*i*i<=n;i++){
                c++;
        }
        cout<<c<<endl;
    }

    return 0;
}