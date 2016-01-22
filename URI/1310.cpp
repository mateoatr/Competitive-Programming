#include <iostream>
#include <vector>
using namespace std;

void MaximumSubArraySum(vector<int> input, int cost){
  if (input.size() > 0){
    int sum = 0, maxSum = 0;

    for (size_t i = 0; i < input.size(); i++){
      sum += input[i] - cost;
      if (sum > 0){
	if (sum > maxSum)
	  maxSum = sum;
      }
      else
	sum = 0;
    }
    
    cout << maxSum << endl;
  }
}

int main(){
  int N, perDayCost;

  while(cin >> N){
    cin >> perDayCost;
    vector<int> revenue(N);

    for(int i = 0; i < N; i++)
      cin >> revenue[i];

    // Maximum contiguous sub-array [ KADANE ]
    MaximumSubArraySum(revenue, perDayCost);
    
  }

  return 0;
}
