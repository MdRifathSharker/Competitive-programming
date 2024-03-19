#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int x=1,max;
        if(a>=b){
            max=a;
        }
        else{
            max=b;
        }
        int sum=a+b;
        while(sum<c){
            sum=sum+max;
            max=sum-max;
            x++;
        }
        if(sum==c){
            x++;
        }
        printf("%d\n",x);
    }    
    
    return 0;
}
