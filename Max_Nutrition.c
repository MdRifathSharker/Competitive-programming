#include <stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++){
	        scanf("%d",&b[i]);
	    }
        for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
                if(a[i]<=a[j]){
                    int c=a[i];
                    a[i]=a[j];
                    a[j]=c;
                    int x=b[i];
                    b[i]=b[j];
                    b[j]=x;
                }
            }
	    }
	    int sum=0;
	    for(int i=0;i<n;i++){
            int max=0;
	        for(int j=i;j<n;j++){
                if(a[i]==a[j]){
                    if(max<b[j]){
                        max=b[j];
                    }
                    i=j;
                }
                else{
                    if(max==0){
                        max=b[j];
                    }
                }
            }
            sum=sum+max;
	    }
	    printf("%d\n",sum);
	}
	return 0;
}