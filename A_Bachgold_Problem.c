#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",a/2);
    if(a%2==0){
        for(int i=1;i<=a/2;i++){
            printf("2 ");
        }
    }    
    else{
        for(int i=1;i<=(a/2)-1;i++){
            printf("2 ");
        }
        printf("3");
    }
    
    return 0;
}
