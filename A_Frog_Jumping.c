#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int a,b,k,c=0;
        scanf("%lld%lld%lld",&a,&b,&k);
        if(k%2==1){
            c=((k/2+1)*a)-((k/2)*b);
        }
        else{
            c=((k/2)*a)-((k/2)*b);
        }
        printf("%lld\n",c);
    }    
    
    return 0;
}
