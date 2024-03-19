#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],x=0,y=0,sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]==1){
                x++;
            }
            else{
                y++;
            }
        }
        if(x%2==0&&y%2==0){
            printf("YES\n");
        }
        else if(y%2!=0&&x>=2&&(x-2)%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }    
    
    return 0;
}
