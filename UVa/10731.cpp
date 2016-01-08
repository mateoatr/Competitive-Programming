#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > adj;
vector<int> dfs_num, dfs_low, S, visitado;
int dfs;

void tarjan(int u){
  dfs_low[u] = dfs_num[u] = dfs++;
  S.push_back(u);
  visitado[u] = 1;

  for(int i = 0; i < (int)adj[u].size(); i++){
    int v = adj[u][i];
    if(dfs_num[v] == 0)
      tarjan(v);
    if(visitado[v])
      dfs_low[u] = min(dfs_low[u], dfs_low[v]);
  }

  if(dfs_low[u] == dfs_num[u]){
    cout << "Componente: ";
    while(true){
      int v = S.back(); S.pop_back(); visitado[v] = 0;
      cout << " " << (char)(v + 'A');
      if(u == v)
	break;
    }
    cout << endl;
  }
}

int main(){
  int n;

  while(cin >> n && n != 0){
    adj.resize(105,vector<int>());
    dfs_num.resize(105);
    dfs_low.resize(105);
    S.resize(105);
    visitado.resize(105);
    
    for(int i = 0; i < n; i++){
      int l[5]; char c;
      for(int j = 0; j < 5; j++){
	cin >> c;
	l[j] = c - 'A';
      }
      cin >> c;
      for(int i = 0; i < 5; i++)
	if(l[i] != c)
	  adj[c-'A'].push_back(l[i]);
    }

    for(int i = 0; i < (int)adj.size(); i++)
      if(!adj[i].empty() && visitado[i] == 0)
	tarjan(i);
    
  }
  
  return 0;
}
