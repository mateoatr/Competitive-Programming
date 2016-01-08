#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> adjlist;

int main(){
  int v, e, desde, hacia;
  while(cin >> v, v != 0){
    cin >> e;
  adjlist AdjList(v); // Lista de adyacentes.

  for(int i = 0; i < e; i++){
    cin >> desde >> hacia;
    AdjList[desde].push_back(hacia);
    AdjList[hacia].push_back(desde); // La gráfica no es dirigida.
  }

  queue<int> q; q.push(0);
  map<int,int> dist; dist[0] = 0;
  bool bipartite = true; // Booleano para decidir si es una gráfica bipartita o no.

  while(!q.empty()){
    int u = q.front(); q.pop();
    for(int i = 0; i < (int)AdjList[u].size(); i++){
      int v = AdjList[u][i];
      if(!dist.count(v)){
	dist[v] = 1 - dist[u]; // En vez de registrar distancias al origen guardamos de qué color es (para ser bipartita sólo tenemos {0,1}).
	q.push(v);
      }
      else if(dist[v] == dist[u]) // Si u y v son vecinos y son del mismo color, la gráfica no puede ser bipartita.
	bipartite = false;
    }
  }

  if(bipartite)
    cout << "BICOLORABLE." << endl;
  else
    cout << "NOT BICOLORABLE." << endl;
  }

  return 0;
}
