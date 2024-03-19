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
        cin>>id>>course_fee;
    }
    void put_data(){
        cout<<id<<endl<<course_fee<<endl;
        bonus();
        cout<<course_fee<<endl;
    }
};
int main ()
{
    int n;
    cin>>n;
    student a[n];
    int x[n],y[n];
    for(int i=0;i<n;i++){
        a[i].get_data(x[i],y[i]);
    }
    for(int i=0;i<n;i++){
        a[i].put_data();
    }
    return 0;
}