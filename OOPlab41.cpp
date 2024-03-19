#include<bits/stdc++.h>
using namespace std;
class cons{
    int x,y;
    public:
    void get_data(){
        int m,n;
        cin>>m>>n;
        x=m;
        y=n;
    }
    cons(){
        x=3;
        y=5;
    }
    void put_data(){
        cout<<"first value :"<<" "<< x<<endl;
        cout<<"second value :"<<" "<< y<<endl;
    }
};
int main ()
{
    cons a;
    a.get_data();
    a.put_data();

    return 0;
}