#include <iostream>
#include <queue>
#include <map>
#include <vector>
using namespace std;

int main(){
  int u, v, n;
  while(cin >> n && n != 0){
    vector<vector<int> > AdjList(n, vector<int>());
    
    while(cin >> u >> v && (u + v) != 0){
      AdjList[u-1].push_back(v-1);
      AdjList[v-1].push_back(u-1);
    }

    queue<int> q; q.push(0);
    map<int,int> distancia; distancia[0] = 0;
    bool bipartita = true;

    while(!q.empty()){
      int y = q.front(); q.pop();
      for(int i = 0; i < (int)AdjList[y].size(); i++){
	int z = AdjList[y][i];
	if(!distancia.count(z)){
	  distancia[z] = 1 - distancia[y];
	  q.push(z);
	}
	else if(distancia[z] == distancia[y]){
	  bipartita = false;
	  break;
	}
      }
    }

    if(bipartita) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}
