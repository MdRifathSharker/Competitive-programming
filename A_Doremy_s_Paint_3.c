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
        int sum=a[0]+a[1];
        int flag=1;
        for(int i=0;i<n;i++){
            int x=a[i]+a[i+1];
            if(x!=sum){
                flag=0;
                break;
            }
            if(i==n-2){
                break;
            }
        }
        if(flag==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }    
    
    return 0;
}
