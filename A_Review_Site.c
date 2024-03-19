#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]==1||a[i]==3){
                c++;
            }
        }
        printf("%d\n",c);
    }    
    
    return 0;
}
