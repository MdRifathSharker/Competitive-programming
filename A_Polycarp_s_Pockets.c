#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]<=a[j]){
                int c=a[j];
                a[j]=a[i];
                a[i]=c;
            }
        }
    }
    int c=1,max=1;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            c++;
            if(max<c){
                max=c;
            }
        }
        else{
            c=1;
        }
    } 
    printf("%d\n",max);
    return 0;
}
