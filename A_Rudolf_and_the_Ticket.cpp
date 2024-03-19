#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x[a],y[b];
        for(int i=0;i<a;i++){
            cin>>x[i];
        }
        for(int i=0;i<b;i++){
            cin>>y[i];
        }
        sort(x,x+a);
        sort(y,y+b);
        int ans=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(x[i]+y[j]<=c){
                    ans++;
                }
                else{
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}