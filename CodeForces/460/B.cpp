#include <bits/stdc++.h>
using namespace std;

bool isPerfect (int x) {
	int a = 0;
	while (x) {
		a += x%10;
		x /= 10;
	}
	return a == 10;
}

int main () {
	int k, ans = 18;
	scanf("%d", &k);

	while (k) {
		ans++;
		if (isPerfect(ans)) k--;
	}

	printf("%d\n", ans);
	
	return 0;
}
