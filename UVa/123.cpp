#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <locale>
using namespace std;

int main(){
  string s;
  map<string,bool> ignore;
  map<string, vector<string> > books;

  while(cin >> s && s != "::")
    ignore[s] = true;

  getline(cin,s);
  while(getline(cin,s)){
    for(size_t i = 0; i < s.size(); i++)
      s[i] = tolower(s[i]);
    
    string t = "";
    for(int i = 0; i < (int)s.size(); i++){
      if(s[i] == ' '){
	string temp = "", add = "";
	for(int j = 0; j < (int)t.size(); j++)
	  temp += toupper(t[j]);
	
	if(!books.count(temp) && !ignore.count(t)){
	  books[temp] = vector<string>();
	  
	  string add = "";
	  for(int k = 0; k < i-(int)t.size(); k++)
	    add += s[k];
	  add += temp;
	  for(int k = i; k < (int)s.size(); k++)
	    add += s[k];
	  
	  books[temp].push_back(add);
	}
	else if(!ignore.count(t)){
	  string add = "";
	  for(int k = 0; k < i-(int)t.size(); k++)
	    add += s[k];
	  add += temp;
	  for(int k = i; k < (int)s.size(); k++)
	    add += s[k];
	  books[temp].push_back(add);
	}
	temp.clear();
	t.clear();
	add.clear();
      }else
	t += s[i];
    }

    if(!t.empty()){
      string temp = "", add = "";
      for(int j = 0; j < (int)t.size(); j++)
	temp += toupper(t[j]);
      
      if(!books.count(temp) && !ignore.count(t)){
	books[temp] = vector<string>();
	  
	string add = "";
	for(int k = 0; k < (int)s.size()-(int)t.size(); k++)
	  add += s[k];
	add += temp;	
	books[temp].push_back(add);
      }
      else if(!ignore.count(t)){
	string add = "";
	for(int k = 0; k < (int)s.size()-(int)t.size(); k++)
	  add += s[k];
	add += temp;
        books[temp].push_back(add);
      }
      temp.clear();
      t.clear();
      add.clear();
    }
  }
  
  for(map<string, vector<string> >::iterator it = books.begin(); it != books.end(); ++it){
    vector<string> v = books[it->first];
    for(size_t i = 0; i < v.size(); i++)
      cout << v[i] << endl;
  }
  
  return 0;
}
