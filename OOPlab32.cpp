#include<bits/stdc++.h>
using namespace std;
class Xyz;
class Abc{
    int x;
public:
    void getdata (int i){
        x=i;
    }
    friend void max (Abc,Xyz);
};
class Xyz
{
    int y;
public:
    void getdata (int i){
        y=i;
    }
    friend void max (Abc,Xyz);
};
void max(Abc a, Xyz b){
    if(a.x>b.y)cout<< "Max = " << a.x;
    else if(b.y>a.x)cout << "Max = " << b.y;
    else cout << "Two Numbers are equal.";
}
int main (){
    Abc a;
    Xyz b;
    int m,n;
    cin >> m >> n;
    a.getdata(m);
    b.getdata(n);
    max(a,b);
}