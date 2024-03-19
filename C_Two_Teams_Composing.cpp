#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        /*for(auto i:s){
            cout<<i<<' ';
        }*/
        int x=s.size();
        sort(a,a+n);
        int c=0,max=0;
        for(int i=0;i<n;i++){
            if(a[i]==a[i+1]){
                c++;
            }
            else{
                if(max<c){
                    max=c;
                    c=0;
                }
            }
        }
        if(x<max){
            max=x;
        }
        if(x==n&&x!=1){
            max++;
        }
        cout<<max<<endl;
    }
    return 0;
}