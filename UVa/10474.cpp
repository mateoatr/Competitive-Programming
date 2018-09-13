#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main() {
    int N, Q, q, c = 1;

    while (cin >> N >> Q && (N + Q != 0)) {
        vector<int> v(N, 0);
        for (int i = 0; i < N; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        
        cout << "CASE# " << c << ":\n";
        for (int i = 1; i <= Q; i++) {
            cin >> q;
            int x = (int)(lower_bound(v.begin(), v.end(), q) - v.begin());
            if (v[x] == q) cout << q << " found at " << x+1 << "\n";
            else cout << q << " not found\n";
        }
        c++;
    }   

    return 0;
}