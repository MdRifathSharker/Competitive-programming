#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%10==9){
            n=n/10+1;
        }
        else{
            n=n/10;
        }
        cout<<n<<endl;
    }

    return 0;
}