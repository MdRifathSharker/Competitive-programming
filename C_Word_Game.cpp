#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>v[3];
        map<string,int>m;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                string x;
                cin>>x;
                v[i].push_back(x);
                m[x]++;
            }
        }
        for(int i=0;i<3;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(m[v[i][j]]==1){
                    sum=sum+3;
                }
                else if(m[v[i][j]]==2){
                    sum=sum+1;
                }
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }

    return 0;
}