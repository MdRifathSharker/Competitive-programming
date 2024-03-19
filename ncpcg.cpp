#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        long long int n,j=0,c=0;
        cin>>n;
        vector<int>v1(n),v2(n),v3,v4;
        for(int i=0; i<n; i++) cin>>v1[i];
        for(int i=0; i<n; i++) cin>>v2[i];
        for(int i=0; i<n; i++) if(v1[j]==v2[i]) v3.push_back(v2[i]),v4.push_back(v1[j]),j++;
        if(v3.empty()) cout<<"Case "<<k<<": "<<n<<endl;
        else if(v3.size()==n) cout<<"Case "<<k<<": "<<"0"<<endl;
        else
        {
            for(int i=0; i<v3.size(); i++)
            {
                for(int q=0; q<n; q++)
                {
                    if(v3[i]==v2[q] && v3[i]==v1[q]) c++;
                }
            }
            if(v3[v3.size()-1]==v2[n-1]) cout<<"Case "<<k<<": "<<n-v3.size()<<endl;
            else cout<<"Case "<<k<<": "<<n-c<<endl;
        }
    }
}
