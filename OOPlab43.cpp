#include<bits/stdc++.h>
using namespace std;
class id{
    int x;
    public:
    id();
    ~id();
    void get_data();
    void put_data();
};
id :: id(){
    cout<<"entered in constractor"<<endl;
    get_data();
    put_data();
}
void id :: get_data(){
        int p;
        cin>>p;
        x=p;
}
void id :: put_data(){
    cout<<x<<endl;
}
id :: ~id(){
    cout<<"entered in destractor"<<endl;
}
int main ()
{
    id a;
    return 0;
}