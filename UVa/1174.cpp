#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<pair<int,ii> > edge;
vi set;

void initSet(int N){
  set.assign(N,0);
  for(int i = 0; i < N; i++)
    set[i] = i;
}

int findSet(int i){
  return (set[i] == i) ? i : (set[i] = findSet(set[i])); }

bool sameSet(int i, int j){
  return findSet(i) == findSet(j); }

void unionSet(int i, int j){
  set[findSet(i)] = findSet(j); }

int main(){
  int T, M, N; cin >> T;

  while(T--){
    cin >> M >> N;
    
    initSet(M);
    string s1, s2; int w, x = 0;
    map<string,int> mapa;
    edge EdgeList;
    
    while(N--){
      cin >> s1 >> s2 >> w;
      if(!mapa.count(s1)){ mapa[s1] = x; x++; }
      if(!mapa.count(s2)){ mapa[s2] = x; x++; }

      EdgeList.push_back(make_pair(w,ii(mapa[s1],mapa[s2])));
    }

    sort(EdgeList.begin(), EdgeList.end());
    int mst = 0;
    for(int i = 0; i < (int)EdgeList.size(); i++){
      pair<int,ii> front = EdgeList[i];
      if(!sameSet(front.second.first, front.second.second)){
	mst += front.first;
	unionSet(front.second.first, front.second.second);
      }
    }

    cout << mst << endl;
  }
    
  return 0;
}
