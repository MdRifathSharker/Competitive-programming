#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int x[4],y[4];
        for(int i=0;i<4;i++){
            cin>>x[i]>>y[i];
        }
        long long int sum=0;
        for(int i=0;i<4;i++){
            if(x[i]!=x[i+1]){
                sum=x[i]-x[i+1];
                break;
            }
        }
        if(sum==0){
            sum=x[0]-x[1];
        }
        cout<<sum*sum<<endl;
    }

    return 0;
}