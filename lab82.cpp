#include<bits/stdc++.h>
using namespace std;
int fibonacci(int a){
    if(a==0){
        return 0;
    }
    else if(a==1){
        return 1;
    }
    else{
        return fibonacci(a-1)+fibonacci(a-2);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=fibonacci(i);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    cout<<a[n-1];
    return 0;
}