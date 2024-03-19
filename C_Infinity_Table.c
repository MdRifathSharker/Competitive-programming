#include<stdio.h>
#include<math.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        scanf("%d",&a);
        int p=sqrt(a);
        if(p*p<a){
            p++;
        }
        int max=p*p,min=((p-1)*(p-1))+1;
        int c=0;
        for(int i=min;i<=max;i++){
            c++;
            if(i==a){
                break;
            }
        }
        int x=0,y=0;
        if(c==p){
            x=p;
            y=p;
        }
        else if(c<p){
            x=c;
            y=p;
        }
        else{
            x=p;
            y=p-(c-p);
        }
        printf("%d %d\n",x,y);
    }    
    
    return 0;
}
