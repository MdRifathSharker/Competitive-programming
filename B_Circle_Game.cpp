#include<bits/stdc++.h>
using namespace std;
int main ()
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
        int x,y;
        if(n%2!=0){
            cout<<"Mike\n";
        }
        else{
            long long int mino=10000000000,mine=10000000000;
            for(int i=0;i<n;i+=2){
                if(a[i]<mino){
                    mino=a[i];
                    x=i+1;
                }
            }
            for(int i=1;i<n;i+=2){
                if(a[i]<mine){
                    mine=a[i];
                    y=i+1;
                }
            }
            if(mino>mine){
                cout<<"Mike\n";
            }
            else if(mine>mino){
                cout<<"Joe\n";
            }
            else{
                if(x>y){
                    cout<<"Mike\n";
                }
                else{
                    cout<<"Joe\n";
                }
            }
        }
    }
    return 0;
}