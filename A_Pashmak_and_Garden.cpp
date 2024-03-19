#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    int sum1,sum2;
    sum1=abs(a1-a2);
    sum2=abs(b1-b2);
    /*if(sum1<0){
        sum1*=-1;
    }
    if(sum2<0){
        sum2*=-1;
    }*/
    if(sum1<sum2){
        sum1=sum2;
    }
    if(a1==b1){
        cout<<a1+sum1<<' '<<a2<<' '<<b1+sum1<<' '<<b2;
        return 0;
    }
    if(a2==b2){
        cout<<a1<<' '<<a2+sum1<<' '<<b1<<' '<<b2+sum1;
        return 0;
    }
    int sum3=abs(a1-b1);
    int sum4=abs(a2-b2);
    if(sum3==sum4&&a1==a2||a2==b1){
        cout<<a1<<' '<<a2+sum3<<' '<<b1<<' '<<b2-sum3;
        return 0;
    }
    if(sum3==sum4&&a1==b2){
        cout<<a1+sum3<<' '<<a2<<' '<<b1-sum3<<' '<<b2-sum3;
        return 0;
    }
    cout<<"-1";
    return 0;
}