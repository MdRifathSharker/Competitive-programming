#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(int i=0;i<n;i++){
        if(a[i]!='7'&&a[i]!='4'){
            printf("NO\n");
            return 0;
        }
    }
int sum=0,sum1=0;
    for(int i=0;i<=(n-1)/2;i++){
        if(a[i]=='7'){
            sum=sum+7;
        }
        else{
            sum=sum+4;
        }
    }
    for(int i=n/2;i<n;i++){
        if(a[i]=='7'){
            sum1=sum1+7;
        }
        else{
            sum1=sum1+4;
        }
    }
    if(sum1==sum){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
