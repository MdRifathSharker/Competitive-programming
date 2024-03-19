#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n+1];
        int c=n;
        for(int i=1;i<=n;i++){
            a[i]=c--;
        }
        for(int i=1;i<=n;i++){
            if(a[i]==i){
                int x=a[i];
                a[i]=a[i+1];
                a[i+1]=x;
            }
        }
        for(int i=1;i<=n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }    
    
    return 0;
}
