#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, m, a, b;
        scanf("%d %d", &n, &m);

	double min = DBL_MAX, temp;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		temp = ((1.0 * m) * (1.0 *a)) / (1.0 * b);
		if (temp < min) min = temp;
	}
	printf("%.9f\n", min);
	
	return 0;
}
