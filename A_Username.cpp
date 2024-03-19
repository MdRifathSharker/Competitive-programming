#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        for(int i=0;i<a.size();i++){
            if(a[i]>=48&&a[i]<=57){
                cout<<a[i];
                for(int j=i+1;j<a.size();j++){
                    if(a[j]>=48&&a[j]<=57){
                        a[j]='!';
                    }
                    else{
                        i=j;
                        break;
                    }
                }
            }
            else{
                cout<<a[i];
            }
        }
        cout<<endl;
    }

    return 0;
}