#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        sort(a.begin(),a.end());
        int c=2;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                c++;
            }
            else{
                c+=2;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}