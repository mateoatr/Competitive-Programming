#include <iostream>
#include <map>
using namespace std;

int main() {
  int N, X;
  map<int,int> map;
  cin >> N;

  while (N--) {
    cin >> X;
    map[X]++;
  }

  for (auto it : map) {
    cout << it.first << " aparece " << it.second << " vez(es)" << endl;
  }
  
  return 0;
}
