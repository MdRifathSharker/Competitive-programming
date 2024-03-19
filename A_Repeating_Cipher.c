#include<stdio.h>
int main ()
{
    int n,c=0;
    scanf("%d",&n);
    char a[n],b[n];
    scanf("%s",a); 
    for(int i=0;i<n;i=i+c){
            b[c]=a[i];
            c++;
    }
    b[c]='\0';
    printf("%s",b);
    return 0;
}
