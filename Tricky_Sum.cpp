#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int sum=(n*(n+1))/2;
        long long int sum2=0;
        for(int i=0;i<=n;i++){
            if(pow(2,i)>n){
                break;
            }
            sum2+=pow(2,i);
        }
        cout<<sum-(2*sum2)<<endl;
    }
    return 0;
}