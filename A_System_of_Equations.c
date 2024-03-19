#include<stdio.h>
int main ()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int c=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            int sum=(i*i)+j;
            int sum1=i+(j*j);
            if(sum==n&&sum1==m){
                c++;
            }
        }
    }    
    printf("%d\n",c);
    return 0;
}
