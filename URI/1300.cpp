#include <bits/stdc++.h>
using namespace std;

int main () {
  int hourTickAngle = 0, minuteTickAngle = 0, x;
  map<int, bool> angles;
  angles[0] = true;
  
  for (int i = 0; i < 1000; i++) {
    minuteTickAngle += 6;
    if (i%12 == 0) hourTickAngle += 6;
    minuteTickAngle %= 360;
    hourTickAngle %= 360;

    int a = abs(hourTickAngle - minuteTickAngle);
    int b = abs(minuteTickAngle - hourTickAngle);

    a <= b ? angles[a] = true : angles[b] = true;
  }

  while (scanf("%d", &x) == true) {
    angles[x] ? printf("Y\n") : printf("N\n");
  }

  return 0;
}
