#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a%2==0&&a/2==b||b%2==0&&b/2==a||a==1||b==1){
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }
    }

    return 0;
}