#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

string a, b;
vector<bool> state;
stack<char> S;
vector<vector<char> > ans;

void dfs (int x, int y) {
  if (x == (int)a.size() && y == (int)b.size()) {
    ans.push_back(vector<char>());
    for (int i = 0; i < (int)state.size(); i++) {
      if (state[i]) ans[(int)ans.size()-1].push_back('i');
      else ans[(int)ans.size()-1].push_back('o');
    }
  }

  if (x < (int)a.size()) {
    state.push_back(true);
    S.push(a[x]);
    dfs(x+1, y);
    state.pop_back();
    S.pop();
  }

  if (!S.empty() && y < (int)b.size() && S.top() == b[y]) {
    state.push_back(false);
    char c = S.top();
    S.pop();
    dfs(x, y+1);
    S.push(c);
    state.pop_back();
  }
}

int main () {
  while (cin >> a >> b) {
    ans.clear();
    state.clear();
    dfs(0,0);
    printf("[\n");
    sort(ans.begin(), ans.end());
    for (int i = 0; i < (int)ans.size(); i++) {
      printf("%c", ans[i][0]);
      for (int j = 1; j < (int)ans[i].size(); j++) {
	printf(" %c", ans[i][j]);
      }
      printf("\n");
    }
    printf("]\n");
  }

  return 0;
}
