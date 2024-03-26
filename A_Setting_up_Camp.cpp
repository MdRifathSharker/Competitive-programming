#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--){
        int a,b,c;
        cin>>a>>b>>c;
        long long int ans;
        int sum=b%3;
        if(sum==0){
            ans=a+(b/3)+(c/3);
            if(c%3!=0){
                ans++;
            }
            cout<<ans<<endl;
        }
        else if(sum==1&&c>1||sum==2&&c>0){
            if(sum==1){
                c-=2;
                b+=2;
            }
            else{
                c-=1;
                b+=1;
            }
            ans=a+(b/3)+(c/3);
            if(c%3!=0){
                ans++;
            }
            cout<<ans<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}