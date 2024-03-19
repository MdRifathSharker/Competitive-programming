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
        sort(a,a+n);
        int cmp=-1,c=0;
        for(int i=0;i<n;i++){
            if(a[i]!=cmp){
                c++;
                cmp=a[i];
            }
        }
        int sum=n-c;
        if(sum%2!=0){
            c--;
        }
        cout<<c<<endl;
    }

    return 0;
}