#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char a[31];
        scanf("%s",a);
        int n=strlen(a),i=0;
        char b[31];
        strcpy(b,"314159265358979323846264338327\0");
        for(i=0;i<n;i++){
                if(b[i]!=a[i]){
                    break;
                }
        }
        printf("%d\n",i);
    }    
    
    return 0;
}
