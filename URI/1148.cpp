#include <cstdio>
#include <vector>
#include <queue>
#include <climits>
#include <map>
using namespace std;

int main(){
  int N, E, u, v, w, K, O, D;

  while(scanf("%d %d",&N,&E) && (N+E != 0)){
    vector<vector<pair<int,int> > > adj(N+1,vector<pair<int,int> >());
    map<int,map<int,int> > mapa;

    for(int i = 1; i <= E; i++){
      scanf("%d %d %d",&u,&v,&w);
      adj[u].push_back(make_pair(v,w));
      mapa[u][v] = 1;
    }
    scanf("%d",&K);

    while(K--){
      scanf("%d %d",&O,&D);
      vector<int> dist(N+1,INT_MAX); dist[O] = 0;
      priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq; pq.push(pair<int,int>(0,O));

      while(!pq.empty()){
	pair<int,int> front = pq.top(); pq.pop();
	int d = front.first, u = front.second;
	if(d == dist[u])
	  for(int j = 0; j < (int)adj[u].size(); j++){
	    pair<int,int> v = adj[u][j];
	    if(mapa[v.first][u] == mapa[u][v.first]) v.second = 0;
	    if(dist[u] + v.second < dist[v.first]){
	      dist[v.first] = dist[u] + v.second;
	      pq.push(pair<int,int>(dist[v.first],v.first));
	    }
	  }
      }

      if(dist[D] == INT_MAX) printf("Nao e possivel entregar a carta\n");
      else printf("%d\n",dist[D]);
    }
    printf("\n");
  }
  
  return 0;
}
