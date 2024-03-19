#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int c=0,s;
    int p[5];
    while(a>0){
        int x=a%10;
        a/=10;
        c++;
        p[c]=x;
    }
    for(int i=c+1;i<5;i++){
        p[i]=0;
    }
    for(int i=4;i>=1;i--){
        cout<<p[i];
    }
    return 0;
}