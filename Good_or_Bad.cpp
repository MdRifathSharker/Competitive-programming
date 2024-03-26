#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;   
    while(t--){
        string a;
        cin>>a;
        int flag=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='1'){
                if(a[i+1]=='0'){
                    if(a[i+2]=='1'){
                        flag=1;
                    }
                }
            }
            if(a[i]=='0'){
                if(a[i+1]=='1'){
                    if(a[i+2]=='0'){
                        flag=1;
                    }
                }
            }
        }
        if(flag==1){
            cout<<"Good"<<endl;
        }
        else{
            cout<<"Bad"<<endl;
        }
    }
    
    return 0;
}