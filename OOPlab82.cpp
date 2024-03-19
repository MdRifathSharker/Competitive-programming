#include<bits/stdc++.h>
using namespace std;
class student{
    int id;
    string name;
    float grade;
    public:
    student(){
        int a;
        string b;
        float c;
        cout<<"Enter id, name, grade \n";
        cin>>a>>b>>c;
        id=a;
        name=b;
        grade=c;

    }
    friend void display_student_info(student a);
};
void display_student_info(student a){
    cout<<a.id<<endl<<a.name<<endl<<a.grade<<endl;
}
int main ()
{
    cout<<"Enter the number of student\n";
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++){
        display_student_info(a[i]);
    }
    return 0;
}