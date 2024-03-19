#include<stdio.h>
int main ()
{
    long long int t;
    scanf("%lld",&t);
    while(t--){
        long long int a,b;
        scanf("%lld%lld",&a,&b);
        long long int x,y,z;
        if(b==1){
            printf("NO\n");
        }
        else{
            x=a;
            y=a*b;
            z=a*(b+1);
            printf("YES\n%lld %lld %lld\n",x,y,z);
        }
    }    
    
    return 0;
}
