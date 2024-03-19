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
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i]>a[j]){
                    int c=a[i];
                    a[i]=a[j];
                    a[j]=c;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==a[i+1]){
                a[i]=a[i+1]=0;
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                c++;
            }
        }
        printf("%d\n",c);
    }    
    
    return 0;
}
