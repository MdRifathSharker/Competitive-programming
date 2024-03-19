#include<iostream>
using namespace std;
int main()
{
    int n,m=0;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        a[i-1]=i;
    }
    int x;
    cin>>x;
    int b[x];
    for(int i=0;i<x;i++){
        cin>>b[i];
    }
    int y;
    cin>>y;
    int c[y];
    for(int i=0;i<y;i++){
        cin>>c[i];
    }
    int p[x+y];
    for(int i=0;i<x+y;i++){
        if(i<x){
            p[i]=b[i];
        }
        else{
            p[i]=c[i-x];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<x+y;j++){
            if(a[i]==p[j]){
                m++;
                break;
            }
        }
    }
    if(m==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
    return 0;
}