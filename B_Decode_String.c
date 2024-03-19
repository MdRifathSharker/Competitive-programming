#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char a[n],c[n];
        scanf("%s",a);
        int b[n],x=-1;
        for(int i=0;i<n;i++){
            if(a[i]=='0'){
                b[i]=0;
            }
            if(a[i]=='1'){
                b[i]=1;
            }
            if(a[i]=='2'){
                b[i]=2;
            }
            if(a[i]=='3'){
                b[i]=3;
            }
            if(a[i]=='4'){
                b[i]=4;
            }
            if(a[i]=='5'){
                b[i]=5;
            }
            if(a[i]=='6'){
                b[i]=6;
            }
            if(a[i]=='7'){
                b[i]=7;
            }
            if(a[i]=='8'){
                b[i]=8;
            }
            if(a[i]=='9'){
                b[i]=9;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(b[i]==0){
                b[i-2]=b[i-2]*10+b[i-1];
                b[i]=b[i-1]=-1;
            }
        }
        for(int i=0;i<n;i++){
            if(b[i]!=-1){
                x++;
                c[x]=b[i]+96;
            }
        }
        c[x+1]='\0';
        printf("%s\n",c);
    }

    return 0;
}