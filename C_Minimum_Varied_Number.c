#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[9],c=-1;
        for(int i=9;i>0;i--){
            c++;
            a[c]=i;
        }
        int b[9],x=-1;
        for(int i=0;i<9;i++){
            if(a[i]<=n){
                n=n-a[i];
                x++;
                b[x]=a[i];
            }
        }
        for(int i=x;i>=0;i--){
            printf("%d",b[i]);
        }
        printf("\n");
    }    
    
    return 0;
}
