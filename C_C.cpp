#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int sum=a-1;
        long long int x=0;
        if(b>c){
            x=b-c;
            x=x+c-1;
        }
        else{
            x=c-b;
            x=x+c-1;
        }
        if(sum<x){
            cout<<"1"<<endl;
        }
        else if(x<sum){
            cout<<"2"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }

    }

    return 0;
}