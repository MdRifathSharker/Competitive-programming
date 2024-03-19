#include<bits/stdc++.h>
using namespace std;
class employee{
    double salary;
    int hours;
    public:
    employee(double a,int b){
        salary=a;
        hours=b;
        add_salary();
        add_work();
        cout<<"salary :"<<salary*30<<endl;
    }
    void add_salary(){
        if(salary<500){
            salary+=10;
        }
    }
    void add_work(){
        if(hours>6){
            salary+=5;
        }
    }
};

int main ()
{
    double x;
    int y;
    cout<<"give salary and hour ";
    cin>>x>>y;
    employee a(x,y);
}