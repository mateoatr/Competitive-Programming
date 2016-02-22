#include <iostream>
using namespace std;

int main(){
  string s;
  while(getline(cin,s)){
    bool italic = false, bold = false;
    for(int i = 0; i < (int)s.size(); i++){
      if(s[i] == '_' && !italic){
	cout << "<i>"; italic = true; }
      else if(s[i] == '_' && italic){
	cout << "</i>"; italic = false; }
      else if(s[i] == '*' && !bold){
	cout << "<b>"; bold = true; }
      else if(s[i] == '*' && bold){
	cout << "</b>"; bold = false; }
      else
	cout << s[i];
    }
    cout << endl;
  }

  return 0;
}
