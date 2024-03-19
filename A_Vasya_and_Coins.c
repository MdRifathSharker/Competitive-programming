#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a==0){
            printf("1\n");
        }
        else{
            printf("%d\n",(a*1)+(b*2)+1);
        }
    }    
    
    return 0;
}
