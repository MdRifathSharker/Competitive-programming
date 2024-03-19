#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    while(x--){
        long long n,k;
        cin>>n>>k;
        long long int sum=4*n-2;
        if(k==sum){
            cout<<n*2<<endl;
        }
        else if(k==sum-1){
            cout<<n*2-1<<endl;
        }
        else{
            if(k%2==0){
                cout<<k/2<<endl;
            }
            else{
                cout<<k/2+1<<endl;
            }
        }
    }
    return 0;
}