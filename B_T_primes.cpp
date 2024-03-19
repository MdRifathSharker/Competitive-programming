#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,c=0;
        cin>>a;
        if(a%2==0){
            for(int i=2;i<=a/2;i++){
            if(a%i==0){
                c++;
            }
            if(c==2){
                break;
            }
        }
        }
        else{
            for(int i=3;i<a/2;i+=2){
            if(a%i==0){
                c++;
            }
            if(c==2){
                break;
            }
        }
        }
        if(c==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

#include<stdio.h>
int main (){
    int x,y;
    scanf("%d%d",&x,&y);
    int sum=x*6+y;
    printf("%d",sum);
    return 0;
}