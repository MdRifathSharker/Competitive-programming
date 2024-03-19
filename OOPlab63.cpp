#include<bits/stdc++.h>
using namespace std;
class add{
    int x;
    friend int add1(add);
    public:
    void get_data(){
        int a;
        cin>>a;
        x=a;
    }
};
int add1(add p){
    p.x++;
    return p.x;
}
int main ()
{
    add a;
    a.get_data();
    cout<<add1(a);

    return 0;
}