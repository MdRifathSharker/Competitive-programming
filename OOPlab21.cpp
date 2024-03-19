#include<bits/stdc++.h>
using namespace std;
class student{
    int id;
    int course_fee;
    void bonus(){
        if(course_fee>=5000&&course_fee<=10000){
            course_fee+=2000;
        }
        else if(course_fee>=11000&&course_fee<=20000){
            course_fee+=3000;
        }
        else if(course_fee>20000){
            course_fee+=5000;
        }
    }
    public:
    void get_data(int a,int b){
        id=a;
        course_fee=b;
    }
    void put_data(){
        cout<<id<<endl<<course_fee<<endl;
        bonus();
        cout<<course_fee;
    }
};
int main ()
{
    student a;
    int x,y;
    cin>>x>>y;
    a.get_data(x,y);
    a.put_data();

    return 0;
}