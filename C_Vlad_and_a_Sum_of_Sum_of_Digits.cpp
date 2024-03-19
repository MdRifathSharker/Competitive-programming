#include<bits/stdc++.h>
using namespace std;
int digitSum(int n) {
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main() {
    int t;
    cin>>t;   
    while(t--) {
        int n;
        cin>>n;        
        long long totalSum=0;
        for(int i=1;i<=n;i++) {
            totalSum+=digitSum(i);
        }        
        cout<<totalSum<<endl;
    }
    return 0;
}
