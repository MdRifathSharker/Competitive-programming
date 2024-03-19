#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    char a[n];
	    scanf("%s",a);
        int flag=0;
	    for(int i=0;i<n;i++){
            if(i!=n-1){
                if(a[i]=='0'){
                    flag=1;
                }
                if(flag==0&&a[i]=='1'){
                    printf("IDK\n");
                }
                else if(flag==1){
                    printf("NO\n");
                }
            }
            else{
                if(flag==0&&a[i]=='1'){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
        }
	}
	return 0;
}

