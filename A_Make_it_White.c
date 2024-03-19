#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int lst,fst,flag=0;
        for(int i=0;i<n;i++){
            if(a[i]=='B'&&flag==0){
                flag=1;
                fst=i+1;
            }
            else if(a[i]=='B'){
                lst=i+1;
            }
        }
        cout<<fst<<' '<<lst<<' '<<endl;
    }

    return 0;
}