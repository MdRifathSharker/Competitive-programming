#include<stdio.h>
#include<math.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,sum1=0,sum2=0;
        scanf("%d",&n);
        for(int i=1;i<n/2;i++){
            int sum=pow(2,i);
            sum1=sum1+sum;
        }
        sum1=sum1+pow(2,n);
        for(int i=n/2;i<n;i++){
            int sum=pow(2,i);
            sum2=sum2+sum;
        }
        printf("%d\n",sum1-sum2);
    }    
    
    return 0;
}
