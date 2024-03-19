#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string a,b;
        cin>>n>>a>>b;
        int sum=0,sum2=0;
        for(int i=0;i<n;i++){
            if(a[i]=='0'&&b[i]=='1'){
                sum++;
            }
            if(b[i]=='0'&&a[i]=='1'){
                sum2++;
            }
        }
        int x=max(sum,sum2);
        cout<<x<<endl;
    }

    return 0;
}