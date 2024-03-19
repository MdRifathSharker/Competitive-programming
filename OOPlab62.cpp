#include<bits/stdc++.h>
using namespace std;
class binary{
    int x;
    public:
    void get_data(){
        int d;
        cin>>d;
        x=d;
    }
    binary operator+(binary q){
        binary r;
        r.x=x+q.x;
        return r;
    }
    void put_data(){
        cout<<x<<endl;
    }
};
int main ()
{
    binary a,b,c;
    a.get_data();
    b.get_data();
    c=a+b;
    c.put_data();
    return 0;
}