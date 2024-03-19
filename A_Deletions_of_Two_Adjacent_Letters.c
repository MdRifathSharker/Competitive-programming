#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char a[50],b;
        scanf("%s",a);
        scanf(" %c",&b);
        int n=strlen(a),c=0;
        for(int i=0;i<n;i++){
            if(a[i]==b){
                if((i+1)%2!=0){
                    c=1;
                }
            }
        }
        if(c==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }    
    
    return 0;
}
