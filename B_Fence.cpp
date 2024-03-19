#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    int sum=n*(n+1)/2;
    int sum2=m*(m+1)/2;
    cout<<sum2-sum;

    return 0;
}