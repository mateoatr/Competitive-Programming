#include <iostream>
#include <map>
using namespace std;

int main() {
  int N;

  while (cin >> N) {
    int talla, r = 0;
    char pie;
    map<int, pair<int,int> > zapatos;
    
    while (N--) {
      cin >> talla >> pie;
      if (pie == 'D') zapatos[talla].second++;
      else zapatos[talla].first++;
    }

    for (auto z : zapatos)
      r += min(z.second.first, z.second.second);

    cout << r << endl;
  }
}
