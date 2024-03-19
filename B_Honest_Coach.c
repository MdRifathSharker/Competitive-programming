#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i]<=a[j]){
                    int c=a[i];
                    a[i]=a[j];
                    a[j]=c;
                }
            }
        }
        int min=1001;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum=1001;
                if(i!=j){
                    sum=a[i]-a[j];
                }
                if(sum<0){
                    sum=sum*(-1);
                }
                if(sum<=min){
                    min=sum;
                }
            }
        }
        printf("%d\n",min);
    }    
    
    return 0;
}
