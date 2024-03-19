#include<bits/stdc++.h>
using namespace std;
class rectangle;
class circle;
class shape{
    string name,color;
    public:
    void setname(){
        string a;
        cout<<"enter name ";
        cin>>a;
        name=a;
    }
    void setcolor(){
        string b;
        cout<<"enter color ";
        cin>>b;
        color=b;
    }
    void calculatearea(){
        int a,b;
        cin>>a>>b; 
        cout<<0.5*a*b<<endl;
    }
    void displayinfo(){
        cout<<name<<endl<<color<<endl;
    }

};
class rectangle : public shape{
    int length ,width;
    public:
    void setdimension(){
        int x,y;
        cout<<"enter length and width ";
        cin>>x>>y;
        length=x;
        width=y;
    }
    void calculatearea(){
        cout<<"area of rectangle "<<length*width<<endl;
    }
};
class circle : public shape{
    float radius;
    public:
    void setradius(){
        float a;
        cout<<"enter radius ";
        cin>>a;
        radius=a;
    }
    void calculatearea(){
        cout<<"area of circle "<<radius*radius*3.1416<<endl;
    }
};
int main ()
{
    shape c;
    c.setname();
    c.setcolor();
    c.calculatearea();
    rectangle a;
    a.setname();
    a.setcolor();
    a.setdimension();
    a.displayinfo();
    a.calculatearea();
    circle b;
    b.setname();
    b.setcolor();
    b.setradius();
    b.displayinfo();
    b.calculatearea();
    return 0;
}