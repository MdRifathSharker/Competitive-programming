#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int sum=a-b;
        if(sum<0){
            sum=sum*(-1);
        }
        sum=sum*2;
        if(sum<c||sum<a||sum<b){
            printf("-1\n");
        }
        else{
            int x=(sum/2)+c;
            if(x>sum){
                printf("%d\n",c-(sum/2));
            }
            else {
                printf("%d\n",x);
            }
        }
    }    
    
    return 0;
}
