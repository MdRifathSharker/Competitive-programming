#include <stdio.h>

int main(void) {
	long long int t;
	scanf("%lld",&t);
	while(t--){
	    long long int n,x;
	    scanf("%lld%lld",&n,&x);
	    char a[n];
	    scanf("%s",a);
        long long int c=0,flag=0;
	    for(int i=0;i<n;i++){
            if(a[i]=='0'&&c<=0){
                flag=1;
                break;
            }
            else if(a[i]=='1'){
                c=x;
            }
            else if(a[i]=='0'&&c>0){
                c--;
            }
        }
        if(flag==0&&c>=0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
	}
    return 0;
}

