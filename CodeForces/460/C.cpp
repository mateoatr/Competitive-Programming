#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> seatMap, rows, columns;

int main () {
	int n, m, k;
	char c;
	
	scanf("%d %d %d", &n, &m, &k);

	seatMap.resize(n+2, vector<int>(m+2, 0));
	rows.resize(n+2, vector<int>(m+2, 0));
	columns.resize(n+2, vector<int>(m+2, 0));
	
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			scanf(" %c", &c);
			if (c == '.') seatMap[i][j] = 1;
			else seatMap[i][j] = 0;
		}

	// Columns
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (seatMap[i][j] > 0) columns[i][j] = columns[i-1][j] + seatMap[i][j];
	
	// Rows
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (seatMap[i][j] > 0) rows[i][j] = rows[i][j-1] + seatMap[i][j];

	int ans = 0;

        for (int i = 1; i <= n; i++)
		for (int j = k; j <= m; j++)
			if (rows[i][j] - rows[i][j-k] == k) ans++;

	for (int i = k; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (columns[i][j] - columns[i-k][j] == k) ans++;

	if (k == 1) ans /= 2;
	printf("%d\n", ans);
	
	return 0;
}
