#include <iostream>
using namespace std;

int mapa[203][203], N;
bool negro;

void flood_fill(int i, int j){
  if(i == N){ negro = true; return; }
  mapa[i][j] = 2;
  if(mapa[i-1][j-1] == 0) flood_fill(i-1,j-1);
  if(mapa[i-1][j] == 0) flood_fill(i-1,j);
  if(mapa[i][j-1] == 0) flood_fill(i,j-1);
  if(mapa[i][j+1] == 0) flood_fill(i,j+1);
  if(mapa[i+1][j] == 0) flood_fill(i+1,j);
  if(mapa[i+1][j+1] == 0) flood_fill(i+1,j+1);
}

int main(){
  for(int T = 1; T < 1000000; T++){
    cin >> N;
    if(N == 0) break;
    
    char c;
    negro = false;
    
    for(int i = 0; i < 203; i++) for(int j = 0; j < 203; j++) mapa[i][j] = -1;
    
    for(int i = 1; i <= N; i++)
      for(int j = 1; j <= N; j++){
	cin >> c;
	if(c == 'b') mapa[i][j] = 0;
	else mapa[i][j] = 1;
      }

    for(int i = 1; i <= N; i++)
      if(mapa[1][i] == 0)
	flood_fill(1,i);
    
    cout << T;
    if(negro) cout << " B" << endl;
    else cout << " W" << endl;
  }
  
  return 0;
}
