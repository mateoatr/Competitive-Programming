#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

void espacio(int n){
  if(n < 10) printf("    ");
  else if(n < 100) printf("   ");
  else if(n < 1000) printf("  ");
  else if(n < 10000) printf(" ");
}

int main(){
  vector<int> primos;
  bool criba[60005];
  fill(criba,criba+60005,true);

  for(int i = 2; i <= 60000; i++){
    if(criba[i]){
      primos.push_back(i);
      for(int j = i+i; j <= 60000; j+=i)
	criba[j] = false;
    }
  }
  
  printf("PERFECTION OUTPUT\n");
  int n, num;
  while(scanf("%d",&n) && n != 0){
    int suma = 1, i = 0, mult = 1;
    num = n;
    while(n != 1){
      int temp = 1;
      if(n%primos[i] == 0){
	while(n%primos[i] == 0){
	  temp *= primos[i];
	  n /= primos[i];
	  suma += temp;
	}
	mult *= suma;
	suma = 1;
      }
      i++;
    }

    mult -= num;
    if(mult < num){ espacio(num); printf("%d  DEFICIENT\n",num); }
    else if(mult > num){ espacio(num); printf("%d  ABUNDANT\n",num); }
    else{ espacio(num); printf("%d  PERFECT\n",num); }
  }
  printf("END OF OUTPUT\n");

  return 0;
}
