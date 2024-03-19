#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    int id;
    int salary;
    a(){
        id=1111;
        salary=50000;
    }
};
class b: public a{
    public:
    void getdata(){
        int x,y;
        cout<<"Give Id and salary ";
        cin>>x>>y;
        id=x;
        salary=y;
    }
    void putdata(){
        a();
        cout<<"id= "<<id<<endl<<"Salary= "<<salary<<endl;
    }
};
int main()
{
    a obj1;
    cout<<obj1.id<<endl<<obj1.salary<<endl;
    b obj;
    obj.putdata();
    obj.getdata();
    obj.putdata();
    return 0;
}