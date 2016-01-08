#include <stdio.h>
#include <algorithm>
#define s scanf
#define p printf

int main(){
  int n, i;
  int gente[2000001];
  while(s("%d", &n) && n != 0){
    for(i = 0; i < n; i++)
      s("%d", &gente[i]);

    std::sort(gente, gente+n);

    for(i = 0; i < n; i++){
      if(i > 0) p(" ");
      p("%d", gente[i]);
    }
    p("\n");
  }
  return 0;
}
