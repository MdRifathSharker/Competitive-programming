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
        for(int i=0;i<n/2;i++){
            for(int j=i;j<n;j++){
                if(a[i]<=a[j]){
                    int c=a[i];
                    a[i]=a[j];
                    a[j]=c;
                }
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]!=a[i+1]){
                c++;
            }
        }
        printf("%d\n",c);
    }  
    
    return 0;
}
