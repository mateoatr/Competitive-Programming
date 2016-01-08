#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

inline void fastread(unsigned int &x){
  register unsigned int c = getchar_unlocked();
  x = 0;
  for(; ((c<48||c>57));c=getchar_unlocked());
  for(;c>47&&c<58;c=getchar_unlocked()) x = (x<<1)+(x<<3)+c-48;
}


map<int,int> dist;

void BFS(int s, map<int,vector<int> > AdjList){
  queue<int> q; q.push(s);

  while(!q.empty()){
    int u = q.front(); q.pop();
    for(int i = 0; i < (int)AdjList[u].size(); i++){
      int v = AdjList[u][i];
      if(!dist.count(v)){
	dist[v] = dist[u] + 1;
	q.push(v);
      }
    }
  }
}

int main(){
  unsigned int NC, s, caso = 1, desde, hacia;
  int t;
  while(scanf("%d",&NC) && NC){
    map<int,vector<int> > AdjList;

    for(unsigned int i = 0; i < NC; i++){
      fastread(desde); fastread(hacia);
      AdjList[desde].push_back(hacia);
      AdjList[hacia].push_back(desde);
    }
    
    while(scanf("%d %d",&s,&t) && s+t != 0){
      dist.clear();
      dist[s] = 0;
      int ans = 0;
      BFS(s,AdjList);

      for(map<int,int>::iterator it = dist.begin(); it != dist.end(); it++)
	if(it->second>t)
	  ans++;

      ans += (int)AdjList.size() - (int)dist.size();
      cout << "Case " << caso << ": " << ans << " nodes not reachable from node " << s << " with TTL = " << t << "." << endl;
      caso++;
    }
  }

  return 0;
}
