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
        int max=0;
        for(int i=0;i<n;i++){
            int c=0;
            if(a[i]==0){
                for(int j=i;j<n;j++){
                    if(a[j]==1){
                        break;
                    }
                    else{
                        c++;
                    }
                }
                if(c>max){
                    max=c;
                }
            }
        }
        printf("%d\n",max);
    }    
    
    return 0;
}
