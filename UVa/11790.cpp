#include <iostream>
using namespace std;

int main(){
  int casos, n; cin >> casos;

  for(int i = 1; i <= casos; i++){
    cin >> n;
    int height[n+1], width[n+1], lis[n+1], lds[n+1];

    for(int j = 0; j < n; j++)
      cin >> height[j];

    for(int j = 0; j < n; j++)
      cin >> width[j], lis[j] = lds[j] = width[j];

    for(int j = 0; j < n; j++)
      for(int k = 0; k < j; k++){
	if(height[j] > height[k])
	  lis[j] = max(lis[j], width[j]+lis[k]);
	if(height[j] < height[k])
	  lds[j] = max(lds[j], width[j]+lds[k]);
      }
    

    int dec = 0, inc = 0;
    for(int j = 0; j < n; j++)
      dec = max(lds[j],dec), inc = max(lis[j], inc);

    if(inc >= dec)
      cout << "Case " << i << ". Increasing (" << inc << "). Decreasing (" << dec << ")." << endl;
    else
      cout << "Case " << i << ". Decreasing (" << dec << "). Increasing (" << inc << ")." << endl;
  }

  return 0;
}
