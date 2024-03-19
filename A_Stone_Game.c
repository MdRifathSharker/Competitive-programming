#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int max=0,min=101;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>=max){
                max=a[i];
            }
            if(a[i]<=min){
                min=a[i];
            }
        }
        int c=0,x=0;
        for(int i=0;i<n;i++){
            if(a[i]==max){
                max=i+1;
            }
            if(a[i]==min){
                min=i+1;
            }
        }
        if(n%2!=0){
            n++;
        }
        if(max<n/2&&min<n/2){
            if(max>min){
                c=max;
            }
            else{
                c=min;
            }
        }
        else if(max>n/2&&min>n/2){
            if(max>min){
                c=max-n/2;
            }
            else{
                c=min-n/2;
            }
        }
        else{
            c=0;
        }
        printf("%d\n",c);
    }    
    
    return 0;
}
