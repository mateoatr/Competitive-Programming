#include <iostream>
#include <vector>
using namespace std;

char mapa[101][101];
int N;

void flood_fill(int i, int j){
  mapa[i][j] = '.';

  if(mapa[i-1][j] == 'x' || mapa[i-1][j] == '@')
    flood_fill(i-1,j);
  if(mapa[i+1][j] == 'x' || mapa[i+1][j] == '@')
    flood_fill(i+1,j);
  if(mapa[i][j-1] == 'x' || mapa[i][j-1] == '@')
    flood_fill(i,j-1);
  if(mapa[i][j+1] == 'x' || mapa[i][j+1] == '@')
    flood_fill(i,j+1);
}

int main(){
  int T, r, caso = 0; cin >> T;
  while(T--){
    cin >> N;
    r = 0;
    for(int i = 0; i < N; i++)
      for(int j = 0; j < N; j++)
	cin >> mapa[i][j];

    for(int i = 0; i < N; i++)
      for(int j = 0; j < N; j++)
	if(mapa[i][j] == 'x'){
	  flood_fill(i,j);
	  r++;
	}

    cout << "Case " << ++caso << ": " << r << endl;
  }
  return 0;
}
