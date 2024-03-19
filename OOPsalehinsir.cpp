#include<bits/stdc++.h>
using namespace std;
class person {
    int id;
    string name;
    public:
    void get_data(){
        int x;
        string y;
        cin>>x>>y;
        id=x;
        name=y;
    }
    void put_data(){
        cout<<id<<endl<<name<<endl;
    }
};
class student : public person{
    string course;
    int fee;
    public:
    void get_data1(){
        get_data();
        int z;
        string p;
        cin>>p>>z;
        course=p;
        fee=z;
    }
    void put_data1(){
        put_data();
        cout<<course<<endl<<fee<<endl;
    }
};
int main ()
{
    student a;
    a.get_data1();
    a.put_data1();
    return 0;
}