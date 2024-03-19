#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[1001] = {0};
        for(int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            a[x] = i;
        }
        int sum = -1;
        for(int i = 1; i <= 1000; i++) {
            for(int j = 1 ; j <= 1000; j++) {
                if(a[i] > 0 and a[j] > 0 and __gcd(i, j) == 1) {
                    sum = max(sum, a[i] + a[j]);
                }
            } 
        }
        cout << sum << '\n';
    }
    return 0;
}