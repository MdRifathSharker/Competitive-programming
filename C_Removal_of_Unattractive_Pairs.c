#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=0;
        scanf("%d",&n);
        char a[n+1];
        scanf("%s",a);
        for(int i=0;i<n;i++){
            if(i+1==n){
                break;
            }
            if(a[i]==a[i+1]){
                c++;
            }
        }
        if(n%2!=0){
            c++;
        }    
        printf("%d\n",c);
    }
    
    return 0;
}
