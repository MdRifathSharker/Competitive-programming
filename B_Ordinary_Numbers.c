#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int x=n;
        int c=0;
        while(n>0){
            int p=n%10;
            c++;
            n=n/10;
        }
        if(c==1){
            printf("%d\n",x);
        }
        else{
            printf("%d\n",(c-1)*9);
        }
    }    
    
    return 0;
}
