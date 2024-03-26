#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a;
    cin>>a;
    long long sum=0;    
    for(int i=0;i<a.size();i++){
        sum=sum+(a[i]-48);
    }
    cout<<sum<<endl;
    return 0;
}
