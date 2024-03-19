#include<iostream>
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
            a[i]=i+1;
        }
        if(n%2==0){
            a[0]=1+(n*(n+1)/2%n);
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}