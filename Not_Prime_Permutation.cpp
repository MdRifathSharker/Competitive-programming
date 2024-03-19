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
        if(n==2||n==1){
            cout<<"-1"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]==1){
                    a[i]=3;
                    for(int j=0;j<n;j++){
                        if(j!=i){
                            if(a[j]==3){
                                a[j]=1;
                                break;
                            }
                        }
                    }
                    break;
                }
            }
            for(int i=0;i<n;i++){
            cout<<a[i]<<' ';
        }
        cout<<endl;
        }
    }

    return 0;
}