#include <iostream>
using namespace std;

int main () {
    long long a, b, c, d, e, f, x, y;

    while (cin >> x >> y) {
        if (x == 1 && y == 1) break;

        a = 0, b = 1; // L
        c = 1, d = 0; // R
        e = 1, f = 1; // M
        string ans = "";

        while ((x != e) || (y != f)) {
            if (e*y < f*x) {
                a = e;
                b = f;
                ans += "R";
            }
            else {
                c = e;
                d = f;
                ans += "L";
            }

            // Update M
            e = a+c;
            f = b+d;
        }

        cout << ans << endl;
    }
}