#include<bits/stdc++.h>
using namespace std;
class room{
    public:
    double length=10;
    double width=5;
    double hieght=10;
    void area(){
        cout<<"Area = "<<length*width<<endl;
    }
    void volume(){
        cout<<"Volume = "<<length*width*hieght<<endl;
    }
};
int main (){
    room a;
    a.area();
    a.volume();

    return 0;
}
