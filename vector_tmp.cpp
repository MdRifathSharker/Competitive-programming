#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;
}
int main ()
{
    vector < int > v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<v.size()<<endl;
    printvec(v);
    return 0;
}