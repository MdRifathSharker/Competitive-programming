#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=n%15;
        if(sum!=0){
            sum--;
            int x=15*sum;
            x=n-x;
            sum=sum+(x/10);
            if(x%10!=0){
                sum--;
                int y=n-(x+(10*(x/10)));
                sum=sum+(y/6);
                if(y%6!=0){
                    sum--;
                    int z=n-(x+y+(6*(y)));
                }
            }
        }
    }
    return 0;
}