#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        int p=0,q=0,c=0;
        for(int i=0;i<n;i++){
            if(a[i]=='('){
                p++;
            }
            if(a[i]==')'){
                q++;
            }
            if(q>p){
                c++;
                p=q=0;
            }
        }
        printf("%d\n",c);
    }    
    
    return 0;
}
