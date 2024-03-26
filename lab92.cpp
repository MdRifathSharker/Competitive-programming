#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n+1][3];
    int mx=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2;j++){
            cin>>x[i][j];
            if(mx<x[i][j]){
                mx=x[i][j];
            }
        }
    }
    int a[mx+1][mx+1];
    for(int i=1;i<=mx;i++){
        for(int j=1;j<=mx;j++){
            a[i][j]=0;
        }
    }
    for(int i=1;i<=mx;i++){
        for(int j=1;j<=mx;j++){
            for(int k=1;k<=n;k++){
                if(x[k][1]==i&&x[k][2]==j){
                    a[i][j]=1;
                }
            }
        }
    } 
    for(int i=1;i<=mx;i++){
        for(int j=1;j<=mx;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}