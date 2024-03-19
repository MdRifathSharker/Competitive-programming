#include<bits/stdc++.h>
using namespace std;
class shape{
    public:
    int length;
    int width;
    float radius;
    void getdata(){
        cout<<"Enter length ";
        int x;
        cin>>x;
        length=x;
        cout<<"Enter width ";
        int y;
        cin>>y;
        width=y;
        cout<<"Enter radius ";
        float z;
        cin>>z;
        radius=z;
    }
    void calculatearea(){
        cout<<"area of a circle "<<3.1416*radius*radius<<endl;
    }
};
class rectangle : public shape{
    public:
    void calculatearea(){
        cout<<length<<' '<<width<<endl;
        cout<<"area of a rectangle "<<length*width<<endl;
    }
};
int main ()
{
    rectangle b;
    b.getdata();
    b.calculatearea();
    return 0;
}