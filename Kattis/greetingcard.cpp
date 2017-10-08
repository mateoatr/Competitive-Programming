#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pll;

int main () {
  int n, ans = 0;
  ll u, v;
  vector<pll> V;
  map<pll, bool> m;
  cin >> n;
  
  while (n--) {
    cin >> u >> v;
    V.push_back(pll(u,v));
    m[pll(u,v)] = true;
  }
  
  for (int i = 0; i < (int)V.size(); i++) {
    u = V[i].first; v = V[i].second;
    if (m[pll(u+2018, v)]) ans++;
    if (m[pll(u-2018, v)]) ans++;
    if (m[pll(u, v+2018)]) ans++;
    if (m[pll(u, v-2018)]) ans++;

    if (m[pll(u+1118, v+1680)]) ans++;
    if (m[pll(u+1680, v+1118)]) ans++;
    
    if (m[pll(u+1118, v-1680)]) ans++;
    if (m[pll(u+1680, v-1118)]) ans++;

    if (m[pll(u-1118, v-1680)]) ans++;
    if (m[pll(u-1680, v-1118)]) ans++;

    if (m[pll(u-1118, v+1680)]) ans++;
    if (m[pll(u-1680, v+1118)]) ans++;
  }

  cout << ans/2 << endl;

  return 0;
}
