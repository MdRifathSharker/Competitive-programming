#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    while(x--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int lst=0,fst=0,flag=0;
        for(int i=0;i<n;i++){
            if(a[i]=='B'&&flag==0){
                flag=1;
                fst=i+1;
            }
            if(a[i]=='B'){
                lst=i+1;
            }
        }
        int sum=lst-fst;
        cout<<sum+1<<endl;
    }

    return 0;
}