#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int main(){
  int n, idx, u, v; string a, b;
  
  while(cin >> n){
    vector<vector<int> > vec(700);
    string nombres[700]; idx = 1;
    map<string,int> mapa;
    
    for(int i = 0; i < n; i++){
      cin >> a >> b;
      if(!mapa.count(a)){ u = idx++; mapa[a] = u; nombres[u] = a; }
      else u = mapa[a];
      if(!mapa.count(b)){ v = idx++; mapa[b] = v; nombres[v] = b; }
      else v = mapa[b];

      vec[u].push_back(v); vec[v].push_back(u);
    }

    cin >> a >> b; int s = mapa[a];
    map<int,int> dist; dist[s] = 0;
    vector<int> camino, imprimir;
    queue<int> q; q.push(s); camino.push_back(s);
    int min = 1000;
    
    while(!q.empty()){
      int u = q.front(); q.pop();
      for(int i = 0; i < (int)vec[u].size(); i++){
	int v = vec[u][i];
	if(!dist[v]){
	  dist[v] = dist[u]+1;
	  q.push(v); camino.push_back(v);
	}
      }
      if(dist[mapa[b]] != 0 && dist[mapa[b]] < min){
	min = dist[mapa[b]];
	imprimir = camino;
      }

      if(dist[mapa[b]] != 0) camino.clear();
    }

    if(!dist.count(mapa[b]) || mapa[b] == 0) cout << "No route" << endl;
    else
      for(int i = 0; i < (int)imprimir.size()-1; i++)
	cout << nombres[imprimir[i]] << " " << nombres[imprimir[i+1]] << endl;
    cout << endl;
  }

  return 0;
}
