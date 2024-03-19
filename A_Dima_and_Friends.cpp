#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum=sum+x;
    }
    int sum2=n+1;
    int c=0;
    for(int i=0;i<5;i++){
        if((sum+i)%sum2!=0){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}