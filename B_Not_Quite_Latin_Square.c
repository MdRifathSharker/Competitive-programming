#include<stdio.h>
int main ()
{
    int p;
    scanf("%d",&p);
    while(p--){
        char a[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                scanf(" %c",&a[i][j]);
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(a[i][j]=='?'){
                    if(j==2){
                        if(a[i][0]=='A'&&a[i][1]=='B'){
                            printf("C\n");
                        }
                        if(a[i][0]=='B'&&a[i][1]=='A'){
                            printf("C\n");
                        }
                        if(a[i][0]=='B'&&a[i][1]=='C'){
                            printf("A\n");
                        }
                        if(a[i][0]=='C'&&a[i][1]=='B'){
                            printf("A\n");
                        }
                        if(a[i][0]=='A'&&a[i][1]=='C'){
                            printf("B\n");
                        }
                        if(a[i][0]=='C'&&a[i][1]=='A'){
                            printf("B\n");
                        }
                    }
                    if(j==1){
                        if(a[i][0]=='A'&&a[i][2]=='B'){
                            printf("C\n");
                        }
                        if(a[i][0]=='B'&&a[i][2]=='A'){
                            printf("C\n");
                        }
                        if(a[i][0]=='B'&&a[i][2]=='C'){
                            printf("A\n");
                        }
                        if(a[i][0]=='C'&&a[i][2]=='B'){
                            printf("A\n");
                        }
                        if(a[i][0]=='A'&&a[i][2]=='C'){
                            printf("B\n");
                        }
                        if(a[i][0]=='C'&&a[i][2]=='A'){
                            printf("B\n");
                        }
                    }
                    if(j==0){
                        if(a[i][1]=='A'&&a[i][2]=='B'){
                            printf("C\n");
                        }
                        if(a[i][1]=='B'&&a[i][2]=='A'){
                            printf("C\n");
                        }
                        if(a[i][1]=='B'&&a[i][2]=='C'){
                            printf("A\n");
                        }
                        if(a[i][1]=='C'&&a[i][2]=='B'){
                            printf("A\n");
                        }
                        if(a[i][1]=='A'&&a[i][2]=='C'){
                            printf("B\n");
                        }
                        if(a[i][1]=='C'&&a[i][2]=='A'){
                            printf("B\n");
                        }
                    }
                }
            }
        }
    }    
    
    return 0;
}
