#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],flag=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            for(int j=i-1;j>=0;j--){
                if(a[i]==a[j]){
                    flag=1;
                }
            }
        }
        if(flag==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }    
    
    return 0;
}
