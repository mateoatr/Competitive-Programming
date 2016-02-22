#include <iostream>
#include <climits>
#include <cmath>
#include <queue>
using namespace std;

int tablero[12][12];
int visitado[12][12];
queue<pair<int,pair<int,int> > > q;

void ff(int i, int j, int w){
  if(visitado[i][j] == 1 || tablero[i][j] == -1) return;
  tablero[i][j] = w; visitado[i][j] = 1;

  q.push(make_pair(w+1,pair<int,int>(i-1,j-2)));
  q.push(make_pair(w+1,pair<int,int>(i-2,j-1)));
  q.push(make_pair(w+1,pair<int,int>(i-2,j+1)));
  q.push(make_pair(w+1,pair<int,int>(i-1,j+2)));
  q.push(make_pair(w+1,pair<int,int>(i+1,j+2)));
  q.push(make_pair(w+1,pair<int,int>(i+2,j+1)));
  q.push(make_pair(w+1,pair<int,int>(i+2,j-1)));
  q.push(make_pair(w+1,pair<int,int>(i+1,j-2)));
}

void generarTablero(int a, int b){
  for(int i = 0; i < 12; i++) for(int j = 0; j < 12; j++){ tablero[i][j] = 0; visitado[i][j] = 0; }

  for(int i = 0; i < 13; i++){
    tablero[0][i] = -1; tablero[1][i] = -1; tablero[10][i] = -1; tablero[11][i] = -1;
    tablero[i][0] = -1; tablero[i][1] = -1; tablero[i][10] = -1; tablero[i][11] = -1;
  }

  q.push(make_pair(0,pair<int,int>(a,b)));
  while(!q.empty()){
    pair<int,pair<int,int> > p = q.front(); q.pop();
    ff(p.second.first, p.second.second, p.first);
  }
}

int main(){
  string i, j;
  int a, b, c, d;
  
  while(cin >> i >> j){
    a = (int)(i[0] - 'a'); c = (int)(j[0] - 'a');
    b = (int)(i[1] - '0'); d = (int)(j[1] - '0');
    generarTablero(a+2,b+1);    
    cout << "To get from " << i << " to " << j << " takes " << tablero[c+2][d+1] << " knight moves." << endl;
  }

  return 0;
}
