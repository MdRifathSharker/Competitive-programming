#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a,b;
    cin>>a>>b;
    long long int sum=a+b;
    int A=-1,B=-1,s=-1;
    int p=0,q=0,r=0;
    while(a>0){
        int x=a%10;
        if(x!=0) p=pow(10,++A)*x+p;
        a/=10;
    }
    while(b>0){
        int x=b%10;
        if(x!=0) q=pow(10,++B)*x+q;
        b/=10;
    }
    while(sum>0){
        int x=sum%10;
        if(x!=0) r=pow(10,++s)*x+r;
        sum/=10;
    }
    if(p+q==r){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

    return 0;
}