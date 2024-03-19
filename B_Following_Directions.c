#include<stdio.h>
int main ()
{
    int t,n,i,j,x=0,y=0,z=0;
    char a;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=1;j<=n+1;j++){
            scanf("%c",&a);
            if(a=='U'){
                y++;
                if(y==1&&x==1){
                    z=1;
                    break;
                }
            }
            else if(a=='D'){
                y--;
                if(y==1&&x==1){
                    z=1;
                    break;
                }
            }
            else if(a=='R'){
                x++;
                if(y==1&&x==1){
                    z=1;
                    break;
                }
            }
            else if(a=='L'){
                x--;
                if(y==1&&x==1){
                    z=1;
                    break;
                }
            }
        }
        if(z!=0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        x=0;
        y=0;
        z=0;
    }
    return 0;
}