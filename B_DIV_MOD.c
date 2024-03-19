#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,max=0;
        scanf("%d%d%d",&a,&b,&c);
        for(int i=c-1;i<=b;i++){
            int sum=(i/c)+(i%c);
            if(sum>=max){
                max=sum;
            }
        }
        printf("%d\n",max);
    }    
    
    return 0;
}
