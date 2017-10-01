#include <iostream>
#include <stack>
using namespace std;

stack<int> original;

void fillOriginalStack(int N) {
  while (!original.empty()) original.pop();
  stack<int> helper;

  for (int i = 1; i <= N; i++) {
    helper.push(i);
  }

  while (!helper.empty()) {
    original.push(helper.top());
    helper.pop();
  }
}

int main () {
  int N;
  
  while (cin >> N && N != 0) {
    fillOriginalStack(N);
    
    while(true) {
      int sequence[N], m = 1;
      cin >> sequence[0];
      stack<int> S, T, U = original;
      
      if (sequence[0] == 0) {
	cout << endl;
	break;
      }

      S.push(sequence[0]);

      for (int i = 1; i < N; i++)
	cin >> sequence[i];

      while (true) {
	if (T.empty()) {
	  T.push(U.top());
	  U.pop();
	}
	
	while (S.top() != T.top()) {
	  if (U.empty())
	    break;

	  T.push(U.top());
	  U.pop();
	}

	if (T.top() == S.top()) {
	  S.pop(); T.pop();
	}
	else {
	  cout << "No\n";
	  break;
	}
	
	if (U.empty() && m == N) {
	  cout << "Yes\n";
	  break;
	}
	
	S.push(sequence[m++]);
      } 
    }
  }

  return 0;
}
