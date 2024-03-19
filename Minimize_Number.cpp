#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    while(1){
        int x=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                x++;
                a[i]/=2;
            }
        }
        if(x==n){
            c++;
        }
        else{
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}