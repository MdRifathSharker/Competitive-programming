#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    while(x--){
        vector<pair<char,int>>v;
        for(int i=0;i<26;i++){
            v.push_back({'a'+i,0});
        }
        int n;
        cin>>n;
        int b[n];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<26;j++){
                if(b[i]==v[j].second){
                    cout<<v[j].first;
                    v[j].second++;
                    break;
                }
            }
        }
        cout<<endl;
    }


    return 0;
}