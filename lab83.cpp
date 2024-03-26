#include<bits/stdc++.h>
using namespace std;
static int x=0;
void tower(int a,char beg, char end, char aux){ 
    x++;
    if(a==1){
        cout<<"Move the disk from "<<beg<<" to "<<end<<endl;
        return ;
    }
    tower(a-1,beg,aux,end);
    cout<<"Move the disk from "<<beg<<" to "<<end<<endl;
    tower(a-1,aux,end,beg);
}
int main()
{
    int n;
    cout<<"enter the disk number\n";
    char a='A',b='B',c='C';
    cin>>n;
    if(n==0){
        cout<<"insufficient disk\n";
    }
    else{
        tower(n,a,b,c);
    }
    cout<<x<<endl;
    return 0;
}