#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char a[3],b[3],c[5];
        scanf("%s",a);
        scanf("%s",b);
        for(int i=0;i<4;i++){
            c[i]=a[i];
            if(i>=2){
                c[i]=b[i-2];
            }
        }
        c[4]='\0';
        int count=0;
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                if(c[i]==c[j]){
                    if(count==4){
                        break;
                    }
                    count++;
                }
            }
        }
        if(count==1){
            count=2;
        }
        else if(count==0){
            count=3;
        }
        else if(count==2||count==3){
            count=1;
        }
        else{
            count=0;
        }
        printf("%d\n",count);
    }    
    
    return 0;
}
