#include<stdio.h>
#include<math.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d",&n);
        for(int i=2;i<30;i++){
            int sum=pow(2,i)-1;
            if(n%sum==0){
                x=sum;
                break;
            }
        }
        printf("%d\n",n/x);
    }    
    
    return 0;
}
