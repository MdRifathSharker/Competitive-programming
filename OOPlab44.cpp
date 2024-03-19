#include<bits/stdc++.h>
using namespace std;
class student{
    int id, marks;
    public:
    student()
    {
        id=0;
        marks=0;
    }
    student(int a, int b)
    {
        id=a;
        marks=b;
    }
    void put_data ()
    {
        cout<<id<<endl<<marks<<endl;
    }
    student (student &t){
        id=t.id;
        marks=t.marks;
    }
};
int main ()
{
    int a,b;
    cin>>a>>b;
    student x,y(a,b);
    x.put_data();
    y.put_data();
    student z(y);
    z.put_data();
    return 0;
}