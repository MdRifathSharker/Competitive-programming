#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n,c=0;
        cin>>n;
        int x=n;
        while(n>0){
            int a=n%10;
            n=n/10;
            if(a>0){
                c++;
            }
        }
        cout<<c<<endl;
        for(int i=0;x>0;i++){
            int a=x%10;
            x=x/10;
            if(a>0){
                int sum=pow(10,i);
                cout<<a*sum<<' ';
            }
        }
        cout<<endl;
    }

    return 0;
}