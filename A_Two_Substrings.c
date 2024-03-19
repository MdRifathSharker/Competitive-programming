#include<stdio.h>
#include<string.h>
int main ()
{
    char a[1000001];
    scanf("%s",a);
    int n=strlen(a),c=0;   
    for(int i=0;i<n;i++){
        if(a[i]=='A'&&a[i+1]=='B'){
            
        }
        if(a[i]=='B'&&a[i+1]=='A'){

        }
    }
    printf("NO");
    return 0;
}
