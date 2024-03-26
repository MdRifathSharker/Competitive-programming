#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a;
    getline(cin,a);
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]=='\\'){
            break;
        }
        else{
            cout<<a[i];
        }
    }
    return 0;
}