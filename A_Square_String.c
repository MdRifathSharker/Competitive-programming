#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char a[101];
        scanf("%s",a);
        int n=strlen(a);
        if(n%2!=0){
            printf("NO\n");
        }
        else{
            int c=n/2;
            char b[c+1],d[c+1];
            for(int i=0;i<n;i++){
                if(i>=c){
                    d[i-c]=a[i];
                }
                else{
                    b[i]=a[i];
                }
            }
            b[c]='\0';
            d[n-c]='\0';
            if(strcmp(b,d)==0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }    
    
    return 0;
}
