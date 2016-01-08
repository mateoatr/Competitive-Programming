#include <iostream>
#include <string>
#include <sstream>
#include <queue>
using namespace std;

typedef pair<int,int> ii;

int mapa[1005][1005];
int visitado[1005][1005];

int main(){
  int R, C, N, n, a, b, x, y, r, t;
  string row, s;

  while(cin >> R >> C && (R + C != 0)){
    
    for(int i = 0; i <= R+1; i++)
      for(int j = 0; j <= C+1; j++){
	if(i == 0 || i == R+1 || j == 0 || j == C+1)
	  mapa[i][j] = -1;
	else mapa[i][j] = 0;
	visitado[i][j] = false;
      }
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
      cin >> r >> n; r++;
      for(int j = 0; j < n; j++){
	cin >> t;
	mapa[r][t+1] = 1;
      }
    }

    cin >> a >> b >> x >> y;
    a++; b++; x++; y++;
    
    queue<ii> q; q.push(ii(a,b));
    visitado[a][b] = 0;
    
    while(!q.empty()){
      ii u = q.front(); q.pop();
      if(u.first == x && u.second == y)
	break;
      
      if(mapa[u.first-1][u.second] == 0){
	if(visitado[u.first-1][u.second] == 0){
	  visitado[u.first-1][u.second] = visitado[u.first][u.second] + 1;
	  q.push(ii(u.first-1,u.second));
	}
      }
      if(mapa[u.first+1][u.second] == 0){
	if(visitado[u.first+1][u.second] == 0){
	  visitado[u.first+1][u.second] = visitado[u.first][u.second] + 1;
	  q.push(ii(u.first+1,u.second));
	}
      }
      if(mapa[u.first][u.second-1] == 0){
	if(visitado[u.first][u.second-1] == 0){
	  visitado[u.first][u.second-1] = visitado[u.first][u.second] + 1;
	  q.push(ii(u.first,u.second-1));
	}
      }
      if(mapa[u.first][u.second+1] == 0){
	if(visitado[u.first][u.second+1] == 0){
	  visitado[u.first][u.second+1] = visitado[u.first][u.second] + 1;
	  q.push(ii(u.first,u.second+1));
	}
      }
    }

    cout << visitado[x][y] << endl;
  }

  return 0;
}
