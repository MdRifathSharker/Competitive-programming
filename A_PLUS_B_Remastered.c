#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i]<a[j]){
                    int c=a[i];
                    a[i]=a[j];
                    a[j]=c;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(b[i]>b[j]){
                    int c=b[i];
                    b[i]=b[j];
                    b[j]=c;
                }
            }
        }
        int x=a[0]+b[0];
        int flag=0;
        for(int i=0;i<n;i++){
            if(a[i]+b[i]!=x){
                flag=1;
            }
        }
        if(flag==1){
            printf("-1\n");
        }
        else{
            for(int i=0;i<n;i++){
                printf("%d ",a[i]);
            }
            printf("\n");
            for(int i=0;i<n;i++){
                printf("%d ",b[i]);
            }
            printf("\n");
        }
    }    
    
    return 0;
}
