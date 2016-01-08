#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int> ii;
typedef vector<pair<int,ii> > edge;
typedef vector<int> vi;

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
  int a, b, c, n, k, m;
  bool primero = true;
  
  while(cin >> n){
    int costo_1 = 0, costo_2 = 0;
    edge edgeList;
    
    for(int i = 0; i < n-1; i++){
      cin >> a >> b >> c;
      costo_1 += c;
    }

    cin >> k;
    for(int i = 0; i < k; i++){
      cin >> a >> b >> c;
      edgeList.push_back(make_pair(c,ii(a,b)));
    }

    cin >> m;
    for(int i = 0; i < m; i++){
      cin >> a >> b >> c;
      edgeList.push_back(make_pair(c,ii(a,b)));
    }

    sort(edgeList.begin(), edgeList.end());
    initSet(n+1);
    
    for(int i = 0; i < k+m; i++){
      pair<int,ii> front = edgeList[i];
      if(!sameSet(front.second.first, front.second.second)){
	costo_2 += front.first;
	unionSet(front.second.first, front.second.second);
      }
    }

    if(!primero) cout << endl; primero = false;
    cout << costo_1 << endl;
    cout << costo_2 << endl;
  }
}
