#include <climits>
#include <iomanip>
#include <iostream>
using namespace std;

int main () {
  int u, v;

  while (cin >> u >> v && (u + v != 0)) {
    int adjMatrix[105][105];
    for (int i = 0; i < 105; i++) for (int j = 0; j < 105; j++) adjMatrix[i][j] = INT_MAX/2;
    
    adjMatrix[u][v] = 1;
    while (cin >> u >> v && (u + v != 0)) {
      adjMatrix[u][v] = 1;
    }
    
    for (int k = 1; k <= 100; k++) {
      for (int i = 1; i <= 100; i++) {
	for (int j = 1; j <= 100; j++) {
	  adjMatrix[i][j] = min(adjMatrix[i][j], adjMatrix[i][k] + adjMatrix[k][j]);
	}
      }
    }

    double ans = 0.0;
    int pairs = 0;
    
    for (int i = 1; i <= 100; i++) {
      for (int j = 1; j <= 100; j++) {
	if (adjMatrix[i][j] < INT_MAX/2 && i != j) {
	  pairs++;
	  ans += adjMatrix[i][j];
	}
      }
    }

    cout << fixed << setprecision(3) << ans/pairs << endl;
  }
  
  return 0;
}
