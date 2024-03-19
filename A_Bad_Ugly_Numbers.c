#include<stdio.h>
#include<math.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n==1){
            printf("-1\n");
        }
        else{
            int sum=0,sum1;
            for(int i=0;i<n-1;i++){
                printf("9");
            }
            printf("8\n");
        }
    }    
    
    return 0;
}
