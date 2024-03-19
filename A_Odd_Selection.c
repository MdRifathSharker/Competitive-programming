#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d%d",&n,&x);
        int a[n],odd=0,even=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        int sum=x-odd;
        if(even<odd){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }    
    
    return 0;
}
