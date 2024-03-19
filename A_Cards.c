#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    int one=0,zero=0;
    for(int i=0;i<n;i++){
        if(a[i]=='n'){
            one++;
        }
        else if(a[i]=='z'){
            zero++;
        }
    }    
    for(int i=0;i<one;i++){
        printf("1 ");
    }
    for(int i=0;i<zero;i++){
        printf("0 ");
    }
    
    return 0;
}
