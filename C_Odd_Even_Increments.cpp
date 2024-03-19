#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum1=a[0]%2,flag=0;
        int sum2=a[1]%2;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(a[i]%2!=sum1){
                    flag=1;
                    break;
                }
            }
            else{
                if(a[i]%2!=sum2){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}