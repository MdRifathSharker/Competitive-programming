#include<bits/stdc++.h>
using namespace std;
//class num2;
class num1{
    int n1;
    public:
    num1(){
        cin>>n1;
    }
    friend class num2;
};
class num2{
    int n2;
    public:
    num2(){
        cin>>n2;
    }
    void avg(){
        num1 x;
        float sum=(x.n1+n2)/2.0;
        cout<<sum;
    }

};
int main ()
{
    num2 y;
    y.avg();

    return 0;
}