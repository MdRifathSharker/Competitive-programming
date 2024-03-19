#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n=a.size();
    int c=0;
    int count=0;
    if(n==1){
        cout<<count;
        return 0;
    }
    count++;
    for(int i=0;i<n;i++){
        c+=a[i]-'0';
    }
    if(c<10){
        cout<<count;
    }
    else{
        while(c>=10){
            int x=0,m=c;
            while(m>0){
                int p=m%10;
                x=x+p;
                m=m/10;
            }
            c=x;
            count++;
        }
        cout<<count;
    }
    return 0;
}