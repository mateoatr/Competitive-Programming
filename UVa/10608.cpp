#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> set;
vector<int> num;

int ans(int N){
  int max_ = 0;
  for(int i = 0; i < N+1; i++){
    if(set[i] != -1){
      num[set[i]]++;
      if(num[set[i]] > max_)
	max_ = num[set[i]];
    }
  }
  return max_;
}

void initSet(int N){
  set.assign(N+3,-1);
  num.assign(N+3,1);
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
  int T, N, M, a, b; cin >> T;

  while(T--){
    cin >> N >> M;
    initSet(N);

    for(int i = 0; i < M; i++){
      cin >> a >> b;
      unionSet(a,b);
    }

    cout << ans(N) << endl;
  }
  
  return 0;
}
