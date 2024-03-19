#include<bits/stdc++.h>
using namespace std;
class animal {
    public:
    void why(){
        cout<<"animal can walk\n";
    }
};
class man: public animal{
    public:
    void why(){
        cout<<"man can walk too\n";
    }
};
int main ()
{
    animal a1;
    man m1;
    a1.why();
    m1.why();

    return 0;
}