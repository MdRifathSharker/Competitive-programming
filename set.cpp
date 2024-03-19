#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        s.insert(c);
    }
    for(auto &i:s){
        cout<<i<<" ";
    }


    return 0;
}