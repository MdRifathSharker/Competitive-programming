#include<stdio.h>
int main ()
{
    long long int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld",&a,&b);
        long long int x[b];
        for(int i=0;i<b;i++){
            x[i]=a/b;
        }
        printf("\n");
        if(x[b-1]*b<a){
            x[b-1]=(a-(x[b-1]*b))+x[0];
        }
        if(x[0]%2==0&&x[b-1]%2==0||x[0]%2!=0&&x[b-1]%2!=0){
            printf("YES\n");
            for(int i=0;i<b;i++){
                printf("%lld ",x[i]);
            }
            printf("\n");
        }
        else{
            printf("NO\n");
        }
    }    
    
    return 0;
}
