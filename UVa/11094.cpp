#include <iostream>
using namespace std;

int mapa[23][23], n, m, max_, cont;
char mapa_char[23][23];

void flood_fill(int i, int j, int z){
  if(z != 2) cont++;
  if(cont >= max_) max_ = cont;
  mapa[i][j] = z;
  if(j == 1 && mapa[i][m] == 1) flood_fill(i,m,z);
  if(mapa[i+1][j] == 1) flood_fill(i+1,j,z);
  if(mapa[i-1][j] == 1) flood_fill(i-1,j,z);
  if(mapa[i][j+1] == 1) flood_fill(i,j+1,z);
  if(mapa[i][j-1] == 1) flood_fill(i,j-1,z);
}

int main(){
  
  while(cin >> n >> m){
    int x, y;
    char c;
    max_ = 0;
    for(int i = 0; i < 23; i++)
      for(int j = 0; j < 23; j++){
	mapa[i][j] = -1;
	mapa_char[i][j] = '@';
      }
    
    for(int i = 1; i <= n; i++)
      for(int j = 1; j <= m; j++)
	cin >> mapa_char[i][j];

    cin >> x >> y;
    c = mapa_char[x+1][y+1];
    
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= m; j++){
	if(mapa_char[i][j] == c) mapa[i][j] = 1;
	else if(mapa_char[i][j] != '@') mapa[i][j] = 0;
      }
    }
    
    if(mapa[x+1][y+1] == 1) flood_fill(x+1,y+1,2);
    
    for(int i = 0; i < 23; i++)
      for(int j = 0; j < 23; j++)
	if(mapa[i][j] == 1){
	cont = 0;
	flood_fill(i,j,3);
	}
    
    cout << max_ << endl;
    max_ = 0; cont = 0;
  }
  
  return 0;
}
