#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <sstream>
using namespace std;

bool apunta(string a, string b){
  if((int)a.size() != (int)b.size())
    return false;
  int x = 0;
  for(int i = 0; i < (int)a.size(); i++)
    if(a[i] != b[i])
      x++;
  if(x == 1) return true;
  return false;
}

int main(){
  int N; cin >> N;
  string s;
  while(N--){
    map<string, vector<string> > adjlist;
    vector<string> dictionary;

    while(true){
      getline(cin,s);
      if(s == "*") break;
      dictionary.push_back(s);
    }

    sort(dictionary.begin(), dictionary.end());
    for(int i = 0; i < (int)dictionary.size(); i++){
      for(int j = 0; j < (int)dictionary.size(); j++){
	if(apunta(dictionary[i],dictionary[j])){
	  adjlist[dictionary[i]].push_back(dictionary[j]);
	  adjlist[dictionary[j]].push_back(dictionary[i]);
	}
      }
    }

    while(getline(cin,s)){
      if(s.empty()) break;

      stringstream ss(s);
      string de, a; ss >> de >> a;

      map<string, int> dist; dist[de] = 0;
      queue<string> q; q.push(de);
      
      while(!q.empty()){
	string x = q.front(); q.pop();
	for(int i = 0; i < (int)adjlist[x].size(); i++){
	  if(!dist.count(adjlist[x][i])){
	    dist[adjlist[x][i]] = dist[x] + 1;
	    q.push(adjlist[x][i]);
	  }
	}
      }
      cout << de << " " << a << " " << dist[a] << endl;
    }
    if(N) cout << endl;
  }
  return 0;
}
