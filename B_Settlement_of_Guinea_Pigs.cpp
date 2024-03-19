#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(a[i]==2){
                int count=0;
                for(int j=i+1;j<n;j++){
                    if(a[j]!=2){
                        i=j;
                        count++;
                    }
                    else{
                        i=j;
                        if(count%2!=0){
                            count++;
                        }
                        sum=sum+(count/2);
                        break;
                    }
                }
            }
            else{
                sum++;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}