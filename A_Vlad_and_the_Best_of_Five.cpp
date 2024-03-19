#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int sum=0;
        for(int i=0;i<5;i++){
            if(a[i]=='A'){
                sum++;
            }
        }
        if(sum>=3){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }

    return 0;
}