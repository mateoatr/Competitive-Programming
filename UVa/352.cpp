#include <iostream>
#include <vector>
using namespace std;

vector<vector<char> > mapa;
int f;

int flood_fill(int x, int y){
  if(x < 0 || x >= f || y < 0 || y >= f) return 0;
  if(mapa[x][y] == '0') return 0;
  mapa[x][y] = '0';
  flood_fill(x-1,y+1);
  flood_fill(x,y+1);
  flood_fill(x+1,y+1);
  flood_fill(x-1,y);
  flood_fill(x+1,y);
  flood_fill(x-1,y-1);
  flood_fill(x,y-1);
  flood_fill(x+1,y-1);
  return 1;
}

int main(){
  int a = 1;
  while(cin >> f){
    int r = 0;
    mapa.resize(f, vector<char>(f));
    for(int i = 0; i < f; i++)
      for(int j = 0; j < f; j++)
	cin >> mapa[i][j];
    
    for(int i = 0; i < f; i++)
      for(int j = 0; j < f; j++)
	if(flood_fill(i,j) == 1)
	  r++;
    
    cout << "Image number " << a << " contains " << r << " war eagles." << endl;
    a++;
    mapa.clear();
  }
  return 0;
}
