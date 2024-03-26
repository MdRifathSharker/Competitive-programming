#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int c=0;
        if(n%2!=0){
            c+=6;
        }
        c=c+((n/2)*13);
        cout<<c<<endl;
    }
    return 0;
}