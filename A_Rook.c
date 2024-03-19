#include<stdio.h>
int main ()
{
    int y;
    scanf("%d",&y);
    while(y--){
        char a[3];
        scanf("%s",a);
        for(int i=0;i<8;i++){
            if(i+49!=a[1]){
                printf(" %c%d\n",a[0],i+1);
            }
        }
        for(int i=0;i<8;i++){
            if(a[0]!='a'+i){
                printf(" %c%c\n",'a'+i,a[1]);
            }
            
        }
    }    
    
    return 0;
}
