#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
    long long int h,x,y1,y2,n;
	cin>>h>>x>>y1>>y2>>n;
	long long int h1=h;
	long long int sum1,sum;
	sum1=h-(y1*n);
	if(sum1<=0){
	    if(sum1%y1==0){
	        sum=h/y1;
	    }
	    else{
	        sum=h/y1+1;
	    }
	}
	else{
	    if(sum1%y2==0){
	        sum=sum1/y2+n;
	    }
	    else{
	        sum=sum1/y2+n+1;
	    }
	}
	long long int ans;
	if(h1%x!=0){
	    ans=(h1/x)+1;
	}
	else{
	    ans=h1/x;
	}
	if(ans>=sum){
	    ans=sum;
	}
    cout<<ans<<endl;
    }
	return 0;
}
