#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char a[n+1];
        scanf("%s",a);
        for(int i=0;i<n;i++){
            if(a[i]!='a'||a[i]!='e'||a[i]!='i'||a[i]!='o'||a[i]!='u'){
                if(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'){
                    if(a[i+2]!='a'||a[i+2]!='e'||a[i+2]!='i'||a[i+2]!='o'||a[i+2]!='u'){
                        if(a[i+3]=='a'||a[i+3]=='e'||a[i+3]=='i'||a[i+3]=='o'||a[i+3]=='u'){
                            printf("%c%c",a[i],a[i+1]);                            
                            if(i+1!=n){
                                i+=1;
                                printf(".");
                            }
                            else{
                                break;
                            }
                        }
                        else{
                            printf("%c%c%c",a[i],a[i+1],a[i+2]);
                            
                            if(i+2!=n){
                                i+=2;
                                printf(".");
                            }
                            else{
                                break;
                            }
                        }
                    } 
                }
            }
        }
        printf("\n");
    }
    return 0;
}