#include<bits/stdc++.h>
using namespace std;
class person {
        string name;
        int id;
        public :
            void get_data();
            void put_data(){
                cout<<name<<endl<<id;
            }
    };
void person :: get_data(){
        cin>>name>>id;
    }
int main ()
{
    person a;
    a.get_data();
    a.put_data();
    return 0;
}