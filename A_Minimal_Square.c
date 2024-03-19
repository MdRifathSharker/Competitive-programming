#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        int min,max;
        if(a<=b){
            min=a;
            max=b;
        }
        else{
            min=b;
            max=a;
        }
        if(min*2<max){
            printf("%d\n",max*max);
        }
        else{
            printf("%d\n",(min*min)*4);
        }
    }    
    
    return 0;
}
