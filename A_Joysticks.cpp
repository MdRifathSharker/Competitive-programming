#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    if(a==1&&b==1){
        cout<<"0";
        return 0;
    }
    int c=0;
    while(a>0&&b>0){
        if(a<=b){
            a+=1;
            b-=2;
            c++;
        }
        else if(a>=b){
            b+=1;
            a-=2;
            c++;
        }
    }
    cout<<c;

    return 0;
}