#include <iostream>
#include <queue>
using namespace std;

typedef vector<vector<int> > adj;
typedef vector<int> vi;

int main(){
  int a, b, n, m, p, d; cin >> n; m = n-1;

  while(n--){
    cin >> p >> d;
    
    adj AdjList;
    AdjList.resize(p+1,vi());
   
    while(d--){
      cin >> a >> b;
      AdjList[a].push_back(b);
      AdjList[b].push_back(a);
    }

    int distancia[p+1] = {0};
    queue<int> q; q.push(0); distancia[0] = 0;

    while(!q.empty()){
      int u = q.front(); q.pop();
      for(int i = 0; i < (int)AdjList[u].size(); i++){
	int v = AdjList[u][i];
	if(distancia[v] == 0){
	  distancia[v] = distancia[u] + 1;
	  q.push(v);
	}
	else if(distancia[v] > distancia[u] + 1){
	  distancia[v] = distancia[u] + 1;
	  q.push(v);
	}
      }
    }
    
    for(int i = 1; i < p; i++)
      cout << distancia[i] << endl;
    if(n) cout << endl;
  }

  return 0;
}
