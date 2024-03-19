#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n],b[m];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int max=0;
        for(int i=0;i<m;i++){
            scanf("%d",&b[i]);
            if(max<b[i]){
                max=b[i];
            }
        }
        int sum=n-max;
        for(int i=sum;i<n;i++){
            for(int j=sum;j<n;j++){
                if(a[i]<a[j]){
                    int c=a[i];
                    a[i]=a[j];
                    a[j]=c;
                }
            }
        }
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }    
    
    return 0;
}
