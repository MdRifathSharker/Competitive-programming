#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int max,min;
        if(a>b){
            max=a;
            min=b;
        }
        else{
            max=b;
            min=a;
        }
        if(min==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<a+b/3<<endl;
        }
    }

    return 0;
}