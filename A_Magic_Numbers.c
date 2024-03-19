#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[15];
    int c=-1;
    while(n>0){
        c++;
        int x=n%10;
        a[c]=x;
        n=n/10;
    }    
    int flag=0;
    for(int i=c;i>=0;i--){
        if(a[i]==1&&a[i-1]==4&&a[i-2]==4){
            i-=2;
        }
        else if(a[i]==1&&a[i-1]==4){
            i--;
        }
        else if(a[i]==1){

        }
        else{
            flag=1;
        }
    }
    if(flag==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
