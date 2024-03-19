#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector <pair <int, double>> v(n);
    for (auto &i: v) {
        cout << "Enter id: "; cin >> i.first;
        cout << "Enter cgpa: "; cin >> i.second;
    }
    sort(v.begin(), v.end(), [&](pair<int, double>a, pair<int, double> b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second < b.second;
    });
    for (auto &i : v) {
        cout << "Id: " << i.first << " cgpa: " << i.second << endl;
    }
    return 0;
}