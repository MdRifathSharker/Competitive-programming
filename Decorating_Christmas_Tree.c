#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,y;
	    scanf("%d%d%d",&n,&x,&y);
        int sum=y/3;
        sum=x-sum;
        //printf("%d\n",sum);
        if(n<=x&&n*3<=y||n*2<=x||(sum/2>=n-(y/3)&&sum>0)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
	}
    return 0;
}
