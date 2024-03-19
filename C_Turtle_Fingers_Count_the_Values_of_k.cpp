#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x[1000];
        int p=-1;
        for(int i=1;i<=c;i++){
            if(c%i==0){
                p++;
                x[p]=i;
            }
        }
        int m=0;
        for(int i=0;i<=p;i++){
            for(int j=0;j<=40;j++){
                if(a==b){
                    if(x[i]*pow(a,j)==c){
                        m++;
                    }
                }
                else{
                    for(int k=0;k<=40;k++){
                    if(x[i]*pow(a,j)*pow(b,k)==c){
                        m++;
                        break;
                    }
                }
                }                
            }
        }
        cout<<m<<endl;
    }

    return 0;
}