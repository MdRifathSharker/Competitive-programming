#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x[n],y[n],m=0,o=-1;
        x[0]=a[0];
        for(int i=1;i<n;i++){
            if(a[i]>x[m]){
                m++;
                x[m]=a[i];
            }
            else{
                o++;
                y[o]=a[i];
            }
        }
        for(int i=0;i<=m;i++){
            cout<<x[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<=o;i++){
            cout<<y[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}