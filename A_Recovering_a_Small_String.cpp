#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        char a[26];
        for(int i=0;i<26;i++){
            a[i]='a'+i;
        }
        int d,b,c;
        for(int i=25;i>=0;i--){
            for(int j=25;j>=0;j--){
                for(int k=25;k>=0;k--){
                    if(i+j+k+3==n){
                        d=i;
                        b=j;
                        c=k;
                        break;
                    }
                }
            }
        }
        cout<<a[d]<<a[b]<<a[c]<<endl;
    }
    return 0;
}