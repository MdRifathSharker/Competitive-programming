#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a[3],c,x=0;
        for(int i=0;i<3;i++){
            scanf("%d",&a[i]);
        }
        if(a[0]>=a[1]&&a[0]>=a[2]){
            c=a[0];
        }
        else if(a[1]>=a[2]&&a[1]>=a[0]){
            c=a[1];
        }
        else if(a[2]>=a[1]&&a[2]>=a[0]){
            c=a[2];
        }
        
        for(int i=0;i<3;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }    
    
    return 0;
}
