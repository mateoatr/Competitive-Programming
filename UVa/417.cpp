#include <iostream>
#include <map>
using namespace std;

int main(){
  map<string,int> mapa;
  int contador = 1;
  string s;
  
  for(int i = 0; i < 26; i++){
    s = (char)('a'+i);
    mapa[s] = contador++;
  }

  for(int i = 0; i < 25; i++)
    for(int j = i+1; j < 26; j++){
      s = (char)('a'+i); s += (char)('a'+j);
      mapa[s] = contador++;
    }

  for(int i = 0; i < 24; i++)
    for(int j = i+1; j < 25; j++)
      for(int k = j+1; k < 26; k++){
	s = (char)('a'+i); s+=(char)('a'+j); s+=(char)('a'+k);
	mapa[s] = contador++;
      }

  for(int i = 0; i < 23; i++)
    for(int j = i+1; j < 24; j++)
      for(int k = j+1; k < 25; k++)
	for(int l = k+1; l < 26; l++){
	  s = (char)('a'+i);s+=(char)('a'+j);s+=(char)('a'+k);s+=(char)('a'+l);
	  mapa[s] = contador++;
        }

  for(int i = 0; i < 22; i++)
    for(int j = i+1; j < 23; j++)
      for(int k = j+1; k < 24; k++)
	for(int l = k+1; l < 25; l++)
	  for(int m = l+1; m < 26; m++){
	    s = (char)('a'+i);s+=(char)('a'+j);s+=(char)('a'+k);s+=(char)('a'+l);s+=(char)('a'+m);
	    mapa[s] = contador++;
	  }

  while(cin>>s)
    cout << mapa[s] << endl;
  
  return 0;
}
