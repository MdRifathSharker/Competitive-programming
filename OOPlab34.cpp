#include<bits/stdc++.h>
using namespace std;
class divisible1{
    int n,m;
public:      
    void get_data(int a,int b) {
        n=a;
        m=b;
    }
    friend void sum(divisible1 p);
};
void sum(divisible1 p) {
    int d=0;
    for (int i=p.n;i<=p.m;i++) {
        if(i%9==0){
            d+=i;
        }        
    }
    cout<<d<<endl;
}
int main() {
    divisible1 p;
    int x,y;
    cin>>x>>y;
    p.get_data(x,y);
    sum(p);
    return 0;
}
