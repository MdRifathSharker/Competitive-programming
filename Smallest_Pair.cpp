// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         long long int n;
//         cin>>n;
//         vector<pair<long long int,long long int>>p(n);
//         for(int i=0;i<n;i++){
//             cin>>p[i].first;
//             p[i].second=i;
//         }
//         sort(p.begin(),p.end());
//         long long sum=p[1].first+p[0].first+p[1].second-p[0].second;
//         cout<<sum<<endl;
//     }
//     return 0;
// }
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
        int min=1e9;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=a[i]+a[j]+j-i;
                if(sum<min){
                    min=sum;
                }
            }
        }
        cout<<min<<endl;
    }
    return 0;
}