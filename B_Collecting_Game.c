#include<stdio.h>
int main ()
{
    long long int t;
    scanf("%lld",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        long long int a[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        for(int i=0;i<n;i++){
            int c=0;
            long long int sum=a[i];
            for(int j=0;j<n;j++){
                if(i!=j){
                    if(sum>=a[j]){
                        sum=sum+a[j];
                    }
                }
            }
            for(int j=0;j<n;j++){
                if(i!=j){
                    if(sum>=a[j]){
                        c++;
                    }
                }
            }
            printf("%d ",c);
        }
        printf("\n");
    }    
    
    return 0;
}
