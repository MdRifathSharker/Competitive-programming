#include<bits/stdc++.h>
using namespace std;
    /*tmplt for class:
        class variable_name {

        };
    */
class person {
        string name;
        int age;
        public :
            void get_data();
            void put_data(){
                cout<<name<<endl<<age;
            }
    };
void person :: get_data(){
        cin>>name>>age;
    }
int main ()
{
    person a;
    a.get_data();
    a.put_data();
    return 0;
}