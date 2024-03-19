#include<bits/stdc++.h>
using namespace std;
class unary{
    int x;
    public:
    void get_data(int a){
        x=a;
    }
    void put_data(){
        cout<<x<<endl;
    }
    void operator--(){
        x=x-1;
    }
};
int main ()
{
    unary a;
    int x;
    cin>>x;
    a.get_data(x);
    a.put_data();
    --a;
    a.put_data();
    return 0;
}