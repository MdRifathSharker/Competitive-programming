#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a;
    cin>>a;    
    for(int i=0;i<a.size();i++){
        if(a[i]==','){
            a[i]=' ';
        }
        else if(a[i]<=90&&a[i]>=65){
            a[i]=a[i]+32;
        }
        else{
            a[i]=a[i]-32;
        }
    }
    cout<<a<<endl;
    return 0;
}
