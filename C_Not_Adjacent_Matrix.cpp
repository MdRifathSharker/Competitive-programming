#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //9 1 8 |1 3 5 |1 3 5 7
    //2 7 3 |7 9 2 |9 11 13 15
    //6 4 5 |4 6 8 |2 4 6 8 
    //             |10 12 14 16
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2){
            cout<<"-1"<<endl;
            continue;
        }
        int a[n][n];
        int c=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(c+2>n*n){
                    c=0;
                }
                a[i][j]=c+=2;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<' ';
            }
            cout<<endl;
        }
    }

    return 0;
}