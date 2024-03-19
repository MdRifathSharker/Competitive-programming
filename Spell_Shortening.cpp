#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        for(int i=0;i<n;i++){
            if(a[i]>a[i+1]){
                a[i]='0';
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]!='0'){
                cout<<a[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
