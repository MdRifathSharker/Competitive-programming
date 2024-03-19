#include<bits/stdc++.h>
using namespace std;
class Time{
    int hour;
    int min;
    int sec;
    public:
    void get_data(int h, int m, int s){
        hour=h;
        min=m;
        sec=s;
    }
    void put_data(){
        cout<<"hours="<<hour<<endl;
        cout<<"minutes="<<min<<endl;
        cout<<"second="<<sec<<endl;
    }
    void total_time(Time a, Time b){
        sec=(a.sec+b.sec)%60;
        min=(a.sec+b.sec)/60+a.min+b.min;
        min=min%60;
        hour=(min+a.min+b.min)/60+a.hour+b.hour;
    }
};
int main ()
{
    Time a,b;
    int x,y,z;
    cin>>x>>y>>z;
    a.get_data(x,y,z);
    cin>>x>>y>>z;
    b.get_data(x,y,z);
    b.total_time(a,b);
    b.put_data();
    return 0;
}