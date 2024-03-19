#include<bits/stdc++.h>
using namespace std;
class square{
    int a;
    public:
    void get_data(){
        int x;
        cin>>x;
        a=x;
    }
    friend class rectangle;
};
class rectangle{
    int c,b,p,q;
    public:
    void get_data(){
        int y,z,p,q;
        cin>>z;
        b=z;
        square n1;
        n1.get_data();
        c=n1.a;
    }
    void area1(){
        p=c*c;
    }
    void area2(){
        q=b*c;
    }
    void max(){
        area1();
        area2();
        cout<<"area of square "<<p<<endl;
        cout<<"area of rectangle "<<q<<endl;
        if(p>q){
            cout<<"max "<<p;
        }
        else{
            cout<<"max "<<q;
        }
    }
};

int main ()
{   
    rectangle n1;
    n1.get_data();
    n1.max();
    return 0;
}