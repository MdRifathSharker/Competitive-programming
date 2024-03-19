#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    while(x--){
        int n;
        cin>>n;
        int a[n];
        int sum=0,x=n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        sum=sum/n;
        if(n%2!=0){
            x++;
        }
        int flag=0,sum1=0;
        
        for(int i=0;i<n;i++){
            if(a[i]>sum){
                sum1=sum1+(a[i]-sum);
            }
            else{
                sum1=sum1-(sum-a[i]);
            }
            if(sum1<0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}