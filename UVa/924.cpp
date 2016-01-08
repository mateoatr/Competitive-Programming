#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

map<int,int> visited;
vector<vector<int> > AdjList;

void res(int arr[], int SIZE){
  int max = -1, idx = 0;
  vector<int> aux(SIZE);
  for(int i = 0; i < SIZE; i++)
    aux[arr[i]]++;
  for(int i = 0; i < SIZE; i++){
    if(aux[i] > max){
      max = aux[i];
      idx = i;
    }
  } if(idx == 0) idx = 1;
  cout << max << " " << idx << endl;
}

void BFS(int v){
  visited[v] = 0; int n = 0;
  queue<int> q; q.push(v);
  while(!q.empty()){
    int u = q.front(); q.pop();
    for(int i = 0; i < (int)AdjList[u].size(); i++){
      int w = AdjList[u][i];
      if(!visited.count(w)){
	visited[w] = visited[u] + 1;
	q.push(w); n++;
      } 
    }
  }

  int ans[(int)visited.size()], idx = 0;
  for(map<int,int>::iterator it = visited.begin(); it != visited.end(); it++)
    ans[idx] = it->second, idx++;

  if(idx>1) res(ans,idx);
  else cout << 0 << endl;
}

int main(){
  int E, N, e, T, s; cin >> E;
  AdjList.resize(E);
  for(int i = 0; i < E; i++){
    cin >> N;
    for(int j = 0; j < N; j++)
      cin >> e, AdjList[i].push_back(e);
  }
  cin >> T;
  for(int i = 0; i < T; i++){
    cin >> s;
    visited.clear();
    BFS(s);
  }
  return 0;
}
