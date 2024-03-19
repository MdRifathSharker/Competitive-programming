#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],max=0,max2=0,c;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(max<a[i]){
                max=a[i];
                c=i;
            }
        }
        for(int i=0;i<n;i++){
            if(c!=i){
                if(max2<a[i]){
                    max2=a[i];
                }
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==max){
                printf("%d ",a[i]-max2);
            }
            else{
                printf("%d ",a[i]-max);
            }
        }
        printf("\n");
    }    
    
    return 0;
}
