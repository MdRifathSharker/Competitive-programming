#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]==i+1&&a[i+1]==i+2){
                c++;
                i++;
            }
            else if(a[i]==i+1){
                c++;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}