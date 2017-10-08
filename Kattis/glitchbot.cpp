#include <bits/stdc++.h>
using namespace std;

bool explore(vector<string> v, int n, int m, int x) {
  int dir = 0;
  /*
    0: Up
    1: Right
    2: Down
    3: Left
   */

  pair<int,int> p = make_pair(50,50);
  for (int i = 0; i < (int)v.size(); i++) {
    if (v[i] == "Forward") {
      if (dir == 0) {
    p.second++;
      }
      else if (dir == 1) {
    p.first++;
      }
      else if (dir == 2) {
    p.second--;
      }
      else {
    p.first--;
      }
    }
    else if (v[i] == "Right") {
      dir = (dir+1)%4;
    }
    else if (v[i] == "Left") {
      if (dir == 0) dir = 3;
      else --dir;
    }
  }

  if (p.first == n && p.second == m) {
    cout << x+1 << " " << v[x] << endl;
    return true;
  }

  return false;
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int k, n, m;
  string s;
  cin >> n >> m >> k;
  vector<string> instrucciones(k);
  n += 50; m += 50;
  
  for (int i = 0; i < k; i++)
    cin >> instrucciones[i];

  for (int i = 0; i < k; i++) {
    string temp = instrucciones[i];
    
    if (instrucciones[i] == "Forward") {
      instrucciones[i] = "Right";
      if (explore(instrucciones, n, m, i)) return 0;
      instrucciones[i] = "Left";
      if (explore(instrucciones, n, m, i)) return 0;
      
    }
    else if (instrucciones[i] == "Right") {
      instrucciones[i] = "Forward";
      if (explore(instrucciones, n, m, i)) return 0;
      instrucciones[i] = "Left";
      if (explore(instrucciones, n, m, i)) return 0;
    }
    else {
      instrucciones[i] = "Forward";
      if (explore(instrucciones, n, m, i)) return 0;
      instrucciones[i] = "Right";
      if (explore(instrucciones, n, m, i)) return 0;
    }
    
    instrucciones[i] = temp;
  }
  
  return 0;
}
