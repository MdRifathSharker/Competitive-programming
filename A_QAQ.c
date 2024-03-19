#include<stdio.h>
#include<string.h>
int main ()
{
    char a[101];
    scanf("%s",a);
    int n=strlen(a);
    int p=0;
    for(int i=0;i<n;i++){
        if(a[i]=='Q'){
            for(int j=i+1;j<n;j++){
                if(a[j]=='A'){
                    for(int k=j+1;k<n;k++){
                        if(a[k]=='Q'){
                            p++;
                        }
                    }
                }
            }
        }
    }
    printf("%d",p);
    return 0;
}