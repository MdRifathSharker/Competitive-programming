#include<bits/stdc++.h>
using namespace std;
int factorial(int a){
    if(a==0||a==1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}
int main()
{
    int n;
    cout<<"enter the value\n";
    cin>>n;
    cout<<factorial(n);
    return 0;
}