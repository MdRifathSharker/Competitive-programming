#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char a[3][3];
    int x=0,y=0,z=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
            if(a[i][j]=='A'){
                x++;
            }
            else if(a[i][j]=='B'){
                y++;
            }
            else if(a[i][j]=='C'){
                z++;
            }
        }
    }
    cout<<x<<' '<<y<<' '<<z;

    return 0;
}