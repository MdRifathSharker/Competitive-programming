#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector< int > v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        v.push_back(i+1);
    }
    /*for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
    }*/
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
        for(int j=1;j<=v[i];j++){
            if(v[i]%j==0){
                cout<<j<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}