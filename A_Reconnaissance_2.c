#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }    
    int sum,max=1001,x,y;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
                sum=a[i]-a[j];
                if(sum<0){
                    sum=sum*(-1);
                }
                if(sum<max){
                    max=sum;
                    x=i;
                    y=j;
                }
            }
        }
    printf("%d %d\n",x,y);
    
    return 0;
}
