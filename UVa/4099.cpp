#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;

map<string,int> palabras;
vector<vector<int> > diccionario;
vector<vector<int> > S;
vector<int> dfs_num, dfs_low, visitado;
int dfsN, t = 1, max_ = 0, idx;

void tarjan(int u){
  dfs_low[u] = dfs_num[u] = dfsN++;
  S[t].push_back(u);
  visitado[u] = 1;

  for(int i = 0; i < (int)diccionario[u].size(); i++){
    int v = diccionario[u][i];
    if(dfs_num[v] == 0)
      tarjan(v);
    if(visitado[v])
      dfs_low[u] = min(dfs_low[u], dfs_low[v]);
  }
  
  if(dfs_low[u] == dfs_num[u]){
    for(int i = 0; i < (int)S[t].size(); i++)
      visitado[S[t][i]] = 0;

    sort(S[t].begin(), S[t].end());
    S[t].erase(unique(S[t].begin(), S[t].end()), S[t].end());
    
    if((int)S[t].size() > max_){
      max_ = (int)S[t].size();
      idx = t;
    }
    t++;
  }
}

int main(){
  int n; string s, w;
  while(cin >> n && n != 0){
    visitado.resize(105);
    dfs_num.resize(105);
    dfs_low.resize(105);
    S.resize(105);
    diccionario.resize(105,vector<int>());
    palabras.clear();
    max_ = 0; t = 1;
    
    int d, x = 0;
    getline(cin,s);
    
    for(int i = 0; i < n; i++){
      getline(cin,s);
      bool def = true;
      istringstream ss(s);

      while(ss >> w){
	if(!palabras.count(w)){
	  palabras.insert(pair<string,int>(w,x));
	  if(def){
	    d = x;
	    def = false;
	  }
	  x++;
	}
	
	if(def){
	  d = palabras[w];
	  def = false;
	}
	
	if(palabras[w] != d) diccionario[d].push_back(palabras[w]);
      }
    }
    
    for(int i = 0; i < (int)diccionario.size(); i++)
      if(!diccionario[i].empty() && visitado[i] == 0)
	tarjan(i);

    vector<string> ans;

    for(int i = 0; i < (int)S[idx].size(); i++){
      for(map<string,int>::iterator it = palabras.begin(); it != palabras.end(); it++)
	if(it->second == S[idx][i]){
	  ans.push_back(it->first);
	  break;
	}
    }

    sort(ans.begin(), ans.end());
    cout << max_ << endl;
    for(int i = 0; i < (int)ans.size(); i++)
      cout << ans[i] << " ";
    cout << endl;
    ans.clear();
  }
  
  return 0;
}
