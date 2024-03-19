#include<stdio.h>
int main ()
{
    int n,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n%3==0){
            printf("Second\n");
        }
        else{
            printf("First\n");
        }
    
    }
    return 0;
}
