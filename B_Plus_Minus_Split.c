#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,sum1=0,sum2=0;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        for(int i=0;i<n;i++){
            if(a[i]=='+'){
                sum1++;
            }
            else{
                sum2++;
            }
        }
        sum1=sum1-sum2;
        if(sum1<0){
            sum1=sum1*(-1);
        }
        printf("%d\n",sum1);
    }    
    
    return 0;
}
