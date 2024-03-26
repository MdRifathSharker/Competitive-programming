#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=pow(2,n)-1;
    int a[sum];
    for(int i=0;i<=sum;i++){
        cin>>a[i];
    }
    for(int i=0;i<=sum;i++){
        cout<<a[i]<<' '<<i<<endl;
    }
    return 0;
}