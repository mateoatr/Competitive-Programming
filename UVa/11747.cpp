#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<pair<int, ii> > edgelist;

bool ordenar(pair<int, ii> a, pair<int, ii> b){
  return (a.first > b.first); }

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
  int n, m, u, v, w;
  cin.sync_with_stdio(false);
  while(cin>>n>>m && n|m){
    initSet(n);
    edgelist edg;
    for(int i = 0; i < m; i++)
      cin>>u>>v>>w, edg.push_back(make_pair(w,ii(u,v)));
    sort(edg.begin(), edg.end(), ordenar);
    
    vi ans;
    while(!edg.empty()){
      pair<int, ii> front = edg.back(); edg.pop_back();
      if(!sameSet(front.second.first, front.second.second))
	unionSet(front.second.first, front.second.second);
      else
	ans.push_back(front.first);
    }
    
    if(ans.empty()){
      cout << "forest" << endl;
      continue;
    }

    sort(ans.begin(), ans.end());
    for(int i = 0; i < (int)ans.size(); i++){
      if(i>0) cout << " ";
      cout << ans[i];
    }
    cout << endl;
  }
  return 0;
}
