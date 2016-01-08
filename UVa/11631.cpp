#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

inline void fastRead_int(unsigned int &x){
  register unsigned int c = getchar_unlocked();
  x = 0;
  for(; ((c<48||c>57));c=getchar_unlocked());
  for(;c>47&&c<58;c=getchar_unlocked()) x = (x<<1)+(x<<3)+c-48;
}

vector<int> set;

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
  unsigned int n, m, a, b, w;
  fastRead_int(n); fastRead_int(m);
  while(n != 0 && m != 0){
    vector<pair<int, pair<int,int> > > edgelist;

    unsigned int total_weight = 0, mst = 0;
    for(unsigned int i = 0; i < m; i++){
      fastRead_int(a); fastRead_int(b); fastRead_int(w);
      edgelist.push_back(make_pair(w, pair<int,int>(a,b)));
      total_weight += w;
    }
    sort(edgelist.begin(), edgelist.end());

    initSet(n); 
    for(unsigned int i = 0; i < m; i++){
      pair<int, pair<int,int> > front = edgelist[i];
      if(!sameSet(front.second.first, front.second.second)){
	mst += front.first;
	unionSet(front.second.first, front.second.second);
      }
    }
    
    printf("%d\n", total_weight - mst);
    fastRead_int(n); fastRead_int(m);
  }
  return 0;
}
