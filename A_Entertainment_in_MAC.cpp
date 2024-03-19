#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        string a;
        cin>>a;
        int x=a.size();
        if(x%2==0){
            reverse(a.begin(), a.end());
            cout<<a;
            reverse(a.begin(), a.end());
            cout<<a<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }
    return 0;
}