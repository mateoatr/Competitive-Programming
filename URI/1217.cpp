#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  float money;
  string str, s;

  scanf("%d", &n);

  float sumMoney = 0;
  int days[n];
  int kgs = 0, kg = 0;

  for (int i = 0; i < n; i++) {
    scanf(" %f", &money);
    sumMoney += money; money = 0.0f;

    getline(cin >> ws, str);
    istringstream iss(str);

    while (iss >> s) kg++;
    kgs += kg; days[i] = kg; kg = 0;
  }

  for (int i = 0; i < n; i++) {
    printf("day %d: %d kg\n", i+1, days[i]);
  }

  printf("%.2f kg by day\n", (float)((float)kgs/(float)n));
  printf("R$ %.2f by day\n", sumMoney/(float)n);

  return 0;
}
