#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int sum=0;
        for(int i=0;i<n;i++){
            if(a[i]=='*'&&a[i+1]=='*'){
                break;
            }
            else{
                if(a[i]=='@'){
                    sum++;
                }
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}