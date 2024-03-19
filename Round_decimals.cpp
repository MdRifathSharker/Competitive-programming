#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a;
    cin>>a;
    int b=a;
    float sum=a-b;
    if(sum>=0.5){
        b++;
    }
    cout<<b;
    return 0;
}