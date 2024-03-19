#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n],sum=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    if(n==4){
            if(a[0]+a[1]==a[2]+a[3]){
                printf("NO\n");
            }
            else{
                printf("YES\n");
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(a[0]==a[i]){
                    sum++;
                }
            }
            if(sum==n){
                printf("NO\n");
            }
            else{
                printf("YES\n");
            }
        }
	}
	return 0;
}

