#include <cstdio>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

double dist(double x1, double y1, double x2, double y2){
  return sqrt((y2-y1)*(y2-y1) + (x2-x1)*(x2-x1)); }

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
  int t, V; scanf("%d",&t);
  double x, y;
  for(int c = 1; c <= t; c++){
    scanf("%d",&V);
    vector<pair<double,double> > p;
    vector<pair<double, pair<int,int> > > edgelist;

    for(int i = 0; i < V; i++){
      scanf("%lf %lf", &x, &y);
      p.push_back(make_pair(x,y));
    } 

    for(int i = 0; i < V; i++){
      for(int j = 0; j < V; j++){
	if(i != j){
	  edgelist.push_back(make_pair(dist(p[i].first,p[i].second,p[j].first,p[j].second), pair<int,int>(i,j)));
	}
      }
    }
    sort(edgelist.begin(), edgelist.end());

    initSet(V); double mst = 0;
    for(int i = 0; i < (int)edgelist.size(); i++){
      pair<double, pair<int,int> > front = edgelist[i];
      if(!sameSet(front.second.first, front.second.second)){
	mst += front.first;
	unionSet(front.second.first, front.second.second);
      }
    }
    
    if(c>1) printf("\n");
    printf("%.2lf\n", mst);
    set.clear();
  }
  return 0;
}
