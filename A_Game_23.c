#include<stdio.h>
int main ()
{
    long long int n,m,c=0;
    scanf("%lld%lld",&n,&m);
    if(m==n){
        printf("0\n");
        return 0;
    }
    else{
    while(m>n){
        if(m%3==0&&(m/3)%n==0){
            c++;
            m=m/3;
        }
        else if(m%2==0&&(m/2)%n==0){
            c++;
            m=m/2;
        }
        else{
            printf("-1\n");
            return 0;
        }
        }
    }
        printf("%lld\n",c);
    
    return 0;
}
