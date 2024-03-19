// #include<bits/stdc++.h>
// using namespace std;
// int main ()
// {
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>>v(n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             int a;
//             cin>>a;
//             v[i].push_back(a);
//         }
//     }
//     // for(int i=0;i<3;i++){
//     //     for(int j=0;j<2;j++){
//     //         cout<<v[j]<<' ';
//     //     }
//     //     cout<<endl;
//     // }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<v[i][j]<<' ';
//         }
//         cout<<endl;
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             sum=sum+v[i][j];
//         }
//     }
//     cout<<sum<<endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a,b,c;
    cin>>a>>b;
    int d=b.size();
    if(a.size()>b.size()){
        d=a.size();
    }
    for(int i=d;i>=0;i--){
        int carry=0;
        int sum=(a[i]-'0')+(b[i]-'0');
            if(sum>9){
                carry=1;
            }
        if(carry==1){
            a[i]==a[i]+1;
            c[i]=sum-10;
        }
        else{
            c[i]=sum;
        }
        
    }
    for(int i=0;i<c.size();i++){
        cout<<c[i];
    }
    //cout << 'a' - 'a';



}