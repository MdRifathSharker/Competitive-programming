#include<stdio.h>
int main ()
{
    long long int n,a,c=0;
    scanf("%lld%lld",&n,&a);
    while(n--){
        long long int x;
        char y;
        scanf(" %c%lld",&y,&x);
        if(y=='+'){
            a=a+x;
        }
        else{
            if(a>=x){
                a=a-x;
            }
            else{
                c++;
            }
        }
    }    
    printf("%lld %lld",a,c);
    return 0;
}
