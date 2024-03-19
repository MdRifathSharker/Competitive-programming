#include<stdio.h>
#include<math.h>
int main ()
{
    long long int t;
    scanf("%lld",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        long long int a[n];
        long long int sum=0;
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            sum=sum+a[i];
        }
        long long int s=sqrt(sum);
        long long int x=pow(s,2);
        if(sum==x){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }    
    
    return 0;
}
