#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=0;
    for(int i=1;i<=a;i++){
        if(b%i==0&&b/i<=a){
                c++;
        }
    }
    printf("%d",c);
    return 0;
}
