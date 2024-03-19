#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll x = 1;
void korefelo()
{
        ll n;
        cin >> n;
        ll a[n];
        for(int i=0 ; i < n ;i++)cin >> a[i];
        int max = 0;
        for(int i = 0 ; i < n ;i+=3)
        {
           if(i+3>n)i--;
           int sum = a[i]+a[i+2];
           if(sum > max) max = sum;
        }

      cout << "Case" << ' ' << x << ':'<< ' ' << max << endl;
      x++;
 
}
int main()

{
    int t;
    cin >> t;
    for(int i = 1 ; i <= t ; i++)
    {
      korefelo();
    }
    
    return 0;
}