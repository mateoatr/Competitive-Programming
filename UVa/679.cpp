#include <cmath>
#include <iostream>
using namespace std;

int fun (int a, int b, int c, int d) {
    if (a == d) return c;
    return (b%2 == 1) ? fun(a+1, ceil(b/2.0), c*2, d) : fun(a+1, ceil(b/2.0), c*2+1, d);
}

int main () {
    int t, D, I; cin >> t;
    
    while (t--) {
        cin >> D >> I;
        cout << fun(1, I, 1, D) << endl;
    }
    cin >> t;

    return 0;
}