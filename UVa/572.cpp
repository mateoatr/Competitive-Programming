#include <iostream>
#include <vector>
using namespace std;

int dr[] = {1,1,0,-1,-1,0,1};
int dc[] = {0,1,1,1,0,-1,-1,-1}; 

vector<vector<char> > mapa;
int columnas, filas;

int flood_fill(int r, int c, char c1, char c2){ 
  if(r < 0 || r >= filas || c < 0 || c >= columnas) return 0;
  if(mapa[r][c] != c1) return 0;
  int ans = 1;
  mapa[r][c] = c2;
  
  flood_fill(r-1,c+1,c1,c2);
  flood_fill(r,c+1,c1,c2);
  flood_fill(r+1,c+1,c1,c2);
  flood_fill(r-1,c,c1,c2);
  flood_fill(r+1,c,c1,c2);
  flood_fill(r-1,c-1,c1,c2);
  flood_fill(r,c-1,c1,c2);
  flood_fill(r+1,c-1,c1,c2);

  return ans;
}

int main(){
  int r, x;
  while(cin >> filas >> columnas && columnas|filas){
    mapa.resize(filas, vector<char>(columnas));
    r = 0;

    for(int i = 0; i < filas; i++)
      for(int j = 0; j < columnas; j++)
	cin >> mapa[i][j];
    
    for(int i = 0; i < filas; i++)
      for(int j = 0; j < columnas; j++){
	if(flood_fill(i, j, '@', '*')>0)
	  r++;
      }
	  
    cout << r << endl;
    mapa.clear();
  }
  return 0;
}
