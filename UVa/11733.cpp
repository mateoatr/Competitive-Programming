#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<pair<int,ii> > edgelist;

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
  int T, N, M, A, X, Y, C; cin >> T;
  for(int caso = 1; caso <= T; caso++){
    cin >> N >> M >> A;
    edgelist EdgeList;
    
    while(M--){
      cin >> X >> Y >> C;
      EdgeList.push_back(make_pair(C,ii(X,Y)));
    }
    
    sort(EdgeList.begin(), EdgeList.end());

    int mst_cost = 0; initSet(N);
    for(int i = 0; i < (int)EdgeList.size(); i++){
      pair<int,ii> front = EdgeList[i];
      if(!sameSet(front.second.first, front.second.second)){
	mst_cost += front.first;
	unionSet(front.second.first, front.second.second);
      }
    }

    sort(set.begin(), set.end());
    set.erase(unique(set.begin(), set.end()),set.end());

    cout << "Case #" << caso << ": " << A*(int)(set.size() - 1) + mst_cost << " " << (int)(set.size() - 1) << endl;
  }
  return  0;
}
