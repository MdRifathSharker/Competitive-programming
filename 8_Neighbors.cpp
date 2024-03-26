#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    char a[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    int x,y;
    cin>>x>>y;
    int c=0;
    if(a[x-1][y]=='x'||x-1<1){
        c++;
    }
    if(a[x+1][y]=='x'||x+1>n){
        c++;
    }
    if(a[x][y-1]=='x'||y-1<1){
        c++;
    }
    if(a[x][y+1]=='x'||y+1>m){
        c++;
    }
    if(a[x-1][y-1]=='x'||x-1<1||y-1<1){
        c++;
    }
    if(a[x+1][y+1]=='x'||x+1>n||y+1>m){
        c++;
    }
    if(a[x-1][y+1]=='x'||y+1>m||x-1<1){
        c++;
    }
    if(a[x+1][y-1]=='x'||x+1>n||y-1<1){
        c++;
    }
    if(c==8){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}