#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        int max,min;
        if(a>b){
            max=a;
            min=b;
        }
        else{
            max=b;
            min=a;
        }
        if((max-min)%2!=0){
            printf("Alice\n");
        }
        else{
            printf("Bob\n");
        }
    }
    return 0;
}