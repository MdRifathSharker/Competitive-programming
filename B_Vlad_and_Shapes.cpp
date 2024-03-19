#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0,sum1=0;
        for(int i=0;i<n;i++){
            string a;
            cin>>a;
            for(int j=0;j<n;j++){
                if(a[j]=='1'){
                    sum++;
                }
            }
            if(sum>0&&sum1==0){
                sum1=sum;
            }
        }
        int x=sqrt(sum);
        if(sum1==x){
            cout<<"SQUARE\n";
        }
        else{
            cout<<"TRIANGLE\n";
        }
    }

    return 0;
}