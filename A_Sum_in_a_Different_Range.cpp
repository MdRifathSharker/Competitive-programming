#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float n;
    cin>>n;
    int sum=n/10;
    cout<<"[";
    for(int i=0;i<10;i++){
        if(i<sum){
            cout<<"+";
        }
        else{
            cout<<".";
        }
    }
    cout<<"]";
}