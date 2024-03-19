#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int x=n;
        int a[n];
        a[0]=1;
        for(int i=1;i<m;i++){
            a[i]=i+1;    
        }
        int sum=n-m-1;
        for(int i=m;i<n;i++){
            a[i]=x;
            x--;    
        }
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
