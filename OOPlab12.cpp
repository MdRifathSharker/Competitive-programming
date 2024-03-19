#include<bits/stdc++.h>
using namespace std;
class person {
        int id;
        float cgpa;
        public :
            void get_data(int x, float y);
            void put_data(){
                cout<<id<<endl<<cgpa;
            }
    };
void person :: get_data(int x, float y){
        id=x;
        cgpa=y;
    }
int main ()
{
    person a;
    int x;
    float y;
    cin>>x>>y;
    a.get_data(x,y);
    a.put_data();
    return 0;
}