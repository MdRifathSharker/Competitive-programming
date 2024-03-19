#include<stdio.h>
#include<string.h>
int main ()
{
    int a,b,c,d;
    char x[7];
    scanf("%d%d%d%d",&a,&b,&c,&d);
    scanf("%s",x);
    int n=strlen(x),sum=0;
    for(int i=0;i<n;i++){
        if(x[i]=='1'){
            sum=sum+a;
        }
        else if(x[i]=='2'){
            sum=sum+b;
        }
        else if(x[i]=='3'){
            sum=sum+c;
        }
        else if(x[i]=='4'){
            sum=sum+d;
        }
    }
    printf("%d",sum);
    return 0;
}
