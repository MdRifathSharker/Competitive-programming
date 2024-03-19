#include<iostream>
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
        int sum=a[0]+a[1];
        if(sum<=a[n-1]){
            cout<<1<<' '<<2<<' '<<n<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}