#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int c=a.length(),d=b.length();
        if(a[c-1]=='S'&&b[d-1]=='L'||a[c-1]=='S'&&b[d-1]=='M'){
            cout<<'<'<<endl;
        }
        else if(a[c-1]=='L'&&b[d-1]=='S'||a[c-1]=='M'&&b[d-1]=='S'){
            cout<<'>'<<endl;
        }
        else if(a[c-1]=='L'&&b[d-1]=='M'){
            cout<<'>'<<endl;
        }
        else if(a[c-1]=='M'&&b[d-1]=='L'){
            cout<<'<'<<endl;
        }
        else if(a.compare(b)==0){
            cout<<'='<<endl;
        }
        else if(a[c-1]==b[d-1]){
            int x=c-2,y=d-2;
            if(a[c-1]=='L'){
                if(x>y){
                    cout<<'>'<<endl;
                }
                else{
                    cout<<'<'<<endl;
                }
            }
            else{
                if(x>y){
                    cout<<'<'<<endl;
                }
                else{
                    cout<<'>'<<endl;
                }
            }
        }
    }
    return 0;
}