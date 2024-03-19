#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int p;
    cin>>p;
    int b[p];
    for(int i=0;i<p;i++){
        cin>>b[i];
    }
    for(int i=0;i<p;i++){
        int low=0,up=n-1,x=0,flag=0,mid;
        while(low<=up){
            mid=(up+low)/2;
            if(a[mid]==b[i]){
                x=mid;
                break;
            }
            else if(a[mid]<b[i]){
                low=mid+1;
                x=low;
            }
            else{
                up=mid-1;
                x=up;
            }
        }
        if(x<0){
            x=0;
        }
        else if(x==mid){
            x++;
        }
        else if(x==low){
            x=x;
        }
        else{
            x=x+1;
        }
        cout<<x<<endl;
    }
    return 0;
}