#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(1){
        n++;
        int x=n;
        int a=x%10;
        x/=10;
        int b=x%10;
        x/=10;
        int c=x%10;
        x/=10;
        int d=x%10;
        x/=10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
            cout<<n;
            return 0;
        }
    }
}