#include <bits/stdc++.h>
using namespace std;
int main() {
    map <char, int> mp;
    string s = "kawsar";
    for (auto i : s) mp[i]++;
    cout << mp['a'] << endl;
    cout << mp.begin()->first << endl;
    cout << mp.begin()->second << endl;
    cout << mp[mp.begin()->first] << endl;
    int first_er_freq = mp['a'];
}