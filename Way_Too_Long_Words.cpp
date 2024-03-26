#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int n=a.size();
        if(n<11){
            cout<<a<<endl;
        }
        else{
            cout<<a[0]<<n-2<<a[n-1]<<endl;
        }
    }   
    return 0;
}
