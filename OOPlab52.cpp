#include<bits/stdc++.h>
using namespace std;
class addition{
    public:
    void add(int a, int b){
        cout<<a+b<<endl;
    }
    void add(float a, float b){
        cout<<(float)a+b<<endl;
    }
};
int main ()
{   
    addition a;
    int x,y;
    cin>>x>>y;
    a.add(x,y);
    float x1,y1;
    cin>>x1>>y1;
    a.add(x1,y1);

    return 0;
}