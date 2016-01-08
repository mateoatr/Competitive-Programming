#include <iostream>
using namespace std;

int mapa[35][83];
char mapa_char[35][83];

void flood_fill(int i, int j){
  mapa[i][j] = 3;
  if(mapa[i+1][j] == 0 || mapa[i+1][j] == 1) flood_fill(i+1,j);
  if(mapa[i-1][j] == 0 || mapa[i-1][j] == 1) flood_fill(i-1,j);
  if(mapa[i][j+1] == 0 || mapa[i][j+1] == 1) flood_fill(i,j+1);
  if(mapa[i][j-1] == 0 || mapa[i][j-1] == 1) flood_fill(i,j-1);
}

int main(){
  int n; cin >> n;
  string s;
  
  for(int i = 0; i < n; i++){
    bool out = false;
    int j = 1;
    for(int i = 0; i < 35; i++) for(int j = 0; j < 83; j++) mapa[i][j] = -1;
    
    while(true){
      getline(cin,s);
      
      for(int i = 0; i < (int)s.size(); i++){
	if(s[i] == '_'){ out = true; break; }
	else if(s[i] == '*') mapa[j][i+1] = 1;
	else if(s[i] == ' ') mapa[j][i+1] = 0;
	else mapa[j][i+1] = 2;
	mapa_char[j][i+1] = s[i];
      }
      j++;

      if(out) break;
    }

    for(int i = 0; i < 35; i++)
      for(int j = 0; j < 83; j++)
	if(mapa[i][j] == 1)
	  flood_fill(i,j);	  

    for(int i = 0; i < 35; i++){
      bool salto = false;
      for(int j = 0; j < 83; j++)
	if(mapa[i][j] != -1){
	  if(mapa[i][j] == 3) cout << "#";
	  else cout << mapa_char[i][j];
	  salto = true;
	}
      if(salto) cout << endl;
    }
    cout << s << endl;
  }

  return 0;
}
