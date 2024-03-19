#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    int a;
    int b;
    void getdata(){
        int x,y;
        cin>>x>>y;
        a=x;
        b=y;
    }
    void putdata(){
        cout<<a<<b;
    }
};
class b: public a{
    public:
    int a,b;
};
int main()
{
    b obj;
    obj.getdata();
    obj.putdata();
    return 0;
}