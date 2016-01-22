#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t, m, n, b, x, k; cin >> t;
  string p, q, r, s;
  
  while(t--){
    getline(cin,p); getline(cin,p);
    cin >> m >> n >> b;
    map<string,int> ingrediente;
    map<string,int> pastel;

    while(m--){
      cin >> s >> x;
      ingrediente[s] = x;
    }

    while(n--){
      getline(cin,s); getline(cin,s);
      pastel[s] = 0;
      cin >> k;
      while(k--){
	cin >> r >> x;
	pastel[s] += ingrediente[r]*x;
      }
    }

    vector<pair<int,string> > v;
    for(map<string,int>::iterator it = pastel.begin(); it != pastel.end(); it++)
      if(it->second <= b)
	v.push_back(make_pair(it->second,it->first));

    sort(v.begin(), v.end());

    for(int i = 0; i < (int)p.size(); i++)
      q += toupper(p[i]);
    cout << q << endl;
    for(int i = 0; i < (int)v.size(); i++)
      cout << v[i].second << endl;
    if((int)v.size() == 0) cout << "Too expensive!" << endl;
    cout << endl; q.clear();
  }

  return 0;
}
