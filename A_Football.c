#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);
    char a[n][11];
    for(int i=0;i<n;i++){
        scanf("%s",a[i]);
    } 
    int c=0,max=0;
    char b[11];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(strcmp(a[i],a[j])==0){
                c++;
            }
        }
        if(max<c){
            max=c;
            strcpy(b,a[i]);
        }
        c=0;
    }    
    printf("%s",b);
    return 0;
}
