#include<iostream>
using namespace std;
int main ()
{
    int n,t;
    cin>>n>>t;
    if(t==10){
        if(n==1){
            cout<<-1;
        }
        else if(n%2==0){
            for(int i=0;i<n/2;i++){
                cout<<t;
            }
        }
        else{
            for(int i=0;i<n/2;i++){
                cout<<t;
            }
            cout<<0;
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout<<t;
        }
    }
    return 0;
}