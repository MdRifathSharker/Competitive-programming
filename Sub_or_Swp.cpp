#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int x,y;
	    cin>>x>>y;
	    while(x!=0){
	        if(x>y){
	            int c=x;
	            x=y;
	            y=c;
	        }
	        else{
	            int c=x;
	            x=y-x;
	            y=c;
	        }
	    }
	    cout<<y<<endl;
	}

}
