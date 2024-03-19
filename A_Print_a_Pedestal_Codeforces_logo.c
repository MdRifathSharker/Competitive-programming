#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int sum=n-6;
        int p=sum;
        if(sum%3!=0){
            sum=((sum/3)+1)*3;
        }
        sum=sum/3;
        int x=sum+2;
        int y=sum+3;
        int z=(p-sum*2)+1;
        if(z==0){
            z++;
            x--;
        }
        printf("%d %d %d\n",x,y,z);
    }    
    
    return 0;
}
