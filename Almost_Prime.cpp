#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int count=0;
    for(int i=2;i<=x;i++){
        int c=0;
        for(int j=2;j<=i;j++){            
            if(i%j==0){
                int flag=0;
                for(int k=2;k<j;k++){
                    if(j%k==0){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    c++;
                }
            }
            if(c>2){
                break;
            }
        }
        if(c==2){
            count++;
        }
    }
    cout<<count;
    return 0;
}