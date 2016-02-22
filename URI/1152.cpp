#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;

vi set;

void initSet(int N){
  set.assign(N,0);
  for(int i = 0; i < N; i++) set[i] = i;
}

int findSet(int i){
  return (set[i] == i) ? i : (set[i] = findSet(set[i])); }

bool sameSet(int i, int j){
  return findSet(i) == findSet(j); }

void unionSet(int i, int j){
  set[findSet(i)] = findSet(j); }

int main(){
  int n, m, u, v, w, t;

  while(scanf("%d %d",&n,&m) && (n+m != 0)){
    vector<pair<int,ii> > edge; t = 0;

    for(int i = 0; i < m; i++){
      scanf("%d %d %d",&u,&v,&w); t += w;
      edge.push_back(make_pair(w,ii(u,v)));
    }
    sort(edge.begin(), edge.end());

    int mst = 0; initSet(n);
    for(int i = 0; i < m; i++){
      pair<int,ii> front = edge[i];
      if(!sameSet(front.second.first, front.second.second)){
	mst += front.first;
	unionSet(front.second.first, front.second.second);
      }
    }

    printf("%d\n",t-mst);
  }
  
  return 0;
}
