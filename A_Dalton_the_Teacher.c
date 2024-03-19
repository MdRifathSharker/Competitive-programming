#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n+1],c=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            if(i==a[i]){
                c++;
            }
        }
        if(c%2!=0){
            c++;
        }
        printf("%d\n",c/2);
    }    
    return 0;
}
