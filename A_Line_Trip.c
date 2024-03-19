#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d%d",&n,&x);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int sum=(x-a[n-1])*2;
        int max=n,sum1=0;
        for(int i=0;i<n;i++){
            if(i+1==n){
                break;
            }
            sum1=a[i+1]-a[i];
            if(sum1>=max){
                max=sum1;
            }
        }
        if(n==1){
            if(a[0]>sum){
                sum1=a[0];
            }
            else{
                sum1=sum;
            }
        }
        if(sum1<=sum){
            sum1=sum;
        }
        printf("%d\n",sum1);
    }    
    
    return 0;
}
