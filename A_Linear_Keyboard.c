#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char a[27];
        scanf("%s",a);
        char b[51];
        scanf("%s",b);
        int n=strlen(b),sum=0;
        int x[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<26;j++){
                if(b[i]==a[j]){
                    x[i]=j;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(i+1==n){
                break;
            }
            int sum1=x[i+1]-x[i];
            if(sum1<0){
                sum1=sum1*(-1);
            }
            sum=sum1+sum;
        }
        printf("%d\n",sum);
    }    
    
    return 0;
}
