#include<bits/stdc++.h>
using namespace std;
class square{
    int a;
    public:
    void get_data(){
        int x;
        cin>>x;
        a=x;
        sum1();
    }
    void sum1(){
        int area=a*a;
        cout<<"area of square "<<area;
    }
    friend class rectangular;
};
class rectangular{
    int c,b;
    public:
    void get_data(){
        int y,z;
        cin>>z;
        b=z;
        square n1;
        c=n1.a;
        sum2();
    }
    void sum2(){
        int area=c*b;
        cout<<"area of rectangular "<<area;
    }

};

int main ()
{   
    square n1;
    rectangular n2;
    n1.get_data();
    n2.get_data(); 

    return 0;
}