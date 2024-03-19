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
        for(int i=0;i<n;i+=2){
            if(i+1==n){
                break;
            }
            if((a[i]%2==0&&a[i+1]%2!=0)||(a[i]%2!=0&&a[i+1]%2==0)){
                c++;
            }
        }
        if(n%2!=0&&a[n-1]%2!=0){
            c++;
        }
        printf("%d\n",c);
    }    
    
    return 0;
}
