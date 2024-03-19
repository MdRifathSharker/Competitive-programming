#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=0;
    for(int i=0;i<=10000;i++){
        for(int j=0;j<=10000;j++){
            for(int k=0;k<=10000;k++){
                if(i+j+k<=a and i*j*k<=b){
                    c++;
                }
                else{
                    break;
                }
            }
        }
    }
    cout<<c;
    return 0;
}