#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        scanf("%d",&a);
        if(a%4==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }    
    
    return 0;
}
