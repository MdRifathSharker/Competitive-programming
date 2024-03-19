#include<bits/stdc++.h>
using namespace std;
int main ()
{
    pair <int , int> p;
    p = {2,3};
    cout << p.first <<' '<< p.first+1<<endl;//p.second;
    //copy a pair
    pair <int , int> p1 = p;
    cout << p1.first <<' '<< p1.second<<endl;
    p1.first=3;
    cout << p1.first <<' '<< p1.second;
    return 0;
}