#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char a[27];
        for(int i=0;i<26;i++){
            a[i]=i+'a';
        }
        a[26]='\0';
        int b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        
    }



}