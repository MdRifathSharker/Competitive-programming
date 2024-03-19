#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        int a=n;
        if(n%3==0||n%7==0){
            flag=1;
        }
        else{
            while(a>=3){
                a=a-3;
                if(a%7==0){
                    flag=1;
                }
            }
            if(flag==0){
                while(n>=7){
                    n=n-7;
                    if(n%3==0){
                        flag=1;
                    }
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}