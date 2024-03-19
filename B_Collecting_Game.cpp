#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            int c=0;
            long long int sum=a[i];
            for(int j=0;j<n;j++){
                if(j<i){
                    sum=sum+b[i];
                }
            }
        }
    }
}