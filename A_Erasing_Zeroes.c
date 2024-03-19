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
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                for(int j=i+1;j<n;j++){
                    if(a[j]=='1'){
                        c=c+(j-i)-1;
                        break;
                    }
                }
            }
        }
        printf("%d\n",c);
    }    
    return 0;
}
