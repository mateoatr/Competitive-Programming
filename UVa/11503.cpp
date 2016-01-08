#include <iostream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

map<string,int> friends;
vector<int> set;
vector<int> ans;
string lista[100003][2];

void initSet(int N){
  set.assign(N,0);
  for(int i = 0; i < N; i++)
    set[i] = i;
  ans.assign(N,1);
}

int findSet(int i){
  return (set[i] == i) ? i : (set[i] = findSet(set[i])); }

bool sameSet(int i, int j){
  return findSet(i) == findSet(j); }

void unionSet(int i, int j, string s){
  set[findSet(j)] = findSet(i);
  friends[s] = set[findSet(j)];
  ans[set[findSet(j)]]++;
}

int main(){
  int T, N; cin >> T;

  while(T--){
    cin >> N;
    string s, z;
    int map_idx = 0, a = 0;
    initSet(N);
    friends.clear();
    ans.clear();
    set.clear();
    getline(cin,s);
    
    while(N--){
      getline(cin,s);
      istringstream ss(s);
      bool primero = true;

      while(ss >> z){

	if(!friends.count(z)){
	  friends.insert(make_pair(z,map_idx));
	  map_idx++;
	}
	
	if(primero){
	  lista[a][0] = z;
	  primero = false;
	}
	else{
	  lista[a][1] = z;
	  unionSet(friends[lista[a][1]], friends[lista[a][0]], lista[a][1]);
	  cout << ans[friends[lista[a][1]]] << endl;
	  a++;
	}
      }
    }
  }
  
  return 0;
}
