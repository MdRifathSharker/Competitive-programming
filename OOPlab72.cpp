#include<bits/stdc++.h>
using namespace std;
class bankaccount{
    public:
    int accountnumber;
    string holdername;
    int taka;
    void get_data(){
        int x,y;
        string p;
        cout<<"enter account number ";
        cin>>x;
        cout<<"enter holder name ";
        cin>>p;
        cout<<"enter balance ";
        cin>>y;
        accountnumber=x;
        holdername=p;
        taka=y;
    }
    friend void put_data(bankaccount a){
        cout<<"Account Number : "<<a.accountnumber<<endl<<"Holder Name : "<<a.holdername<<endl<<"Current Balance : "<<a.taka<<endl;
    }
};
int main ()
{
    bankaccount a,b;
    a.get_data();
    b.get_data();
    cout<<"enter operation 1.withdraw\n2.deposite\n3.transfer\n";
    int x;
    cin>>x;
    if(x==1){
        cout<<"from which person 1 or 2?\n";
        int p;
        cin>>p;
        cout<<"how much ";
        int z;
        cin>>z;
        if(p==1){
            if(a.taka<z){
                cout<<"Insufficient Amount :)"<<endl;
            }
            else{
                a.taka-=z;
                put_data(a);
            }
        }
        else{
            if(b.taka<z){
                cout<<"Insufficient Amount :)"<<endl;
            }
            else{
                b.taka-=z;
                put_data(b);
            }
        }
    }

    return 0;
}