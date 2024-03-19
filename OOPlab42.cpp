#include<bits/stdc++.h>
using namespace std;
class student
{
    int id;
    string name;
    long long int fee;
    public:
    void put_data(){   
        cout<<id<<endl<<name<<endl<<fee<<endl;     
    }
    student (){
        int x;
        string y;
        long long int z;
        cin>>x>>y>>z;
        id=x;
        name=y;
        fee=z;
    }
};
int main ()
{
    student a;
    a.put_data();

    return 0;
}