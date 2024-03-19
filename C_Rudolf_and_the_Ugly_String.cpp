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
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]=='m'&&a[i+1]=='a'&&a[i+2]=='p'||a[i]=='p'&&a[i+1]=='i'&&a[i+2]=='e'){
                c++;
                i+=2;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}