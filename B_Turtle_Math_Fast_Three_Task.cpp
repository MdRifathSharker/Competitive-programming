#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int p;
    cin>>p;
    while(p--){
        int n;
        cin>>n;
        int a[n];
        long long int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        int x=sum%3;
        if(x==0){
            cout<<'0'<<endl;
        }
        else if(x==2){
            cout<<'1'<<endl;
        }
        else{
            int flag=0;
            for(int i=0;i<n;i++){
                if(a[i]%3==1){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                cout<<'1'<<endl;
            }
            else{
                cout<<'2'<<endl;
            }            
        }
    }

    return 0;
}