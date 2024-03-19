#include <bits/stdc++.h>
using namespace std;
class a; 
class b {
    private:
    int x;

    public:
    void nonConstructor() {
        x = 69;
    }
    friend class a;
    friend void ff(b y) {
        cout << y.x << endl;
    }
};

class a {
    public:
    void temp(b b1) {
        cout << b1.x << endl;
    }
};
int main() {
    b b1;
    a a1;
    b1.nonConstructor();
    a1.temp(b1);
    ff(b1);
    return 0;
}