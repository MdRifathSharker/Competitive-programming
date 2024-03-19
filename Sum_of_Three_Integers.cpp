#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,s;
    cin>>k>>s;
    int c=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            if(i+j+(s-i-j)==s&&(s-i-j)<=k&&(s-i-j)>=0){
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}