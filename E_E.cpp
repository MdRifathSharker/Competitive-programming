#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a,b,c,flag=1;
    cin>>a>>b>>c;
    int x=c;
    if(c%a==0||c%b==0){
        flag=0;
    }
    else{
        while(c>=b){
            c-=b;
            if(c%a==0){
                flag=0;
            }
        }
        if(flag==1){
            while(x>=a){
                x-=a;
                if(x%b==0){
                    flag=0;
                }
            }
        }
    }
    if(flag==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    

    return 0;
}