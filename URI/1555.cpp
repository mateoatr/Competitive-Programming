#include <cstdio>
#include <cmath>
using namespace std;

int Rafael(int a, int b){
  return pow(3*a,2) + pow(b,2); }

int Beto(int a, int b){
  return 2*pow(a,2) + pow(5*b,2); }

int Carlos(int a, int b){
  return -100*a + pow(b,3); }

int main(){
  int n, a, b, f1, f2, f3; scanf("%d",&n);

  while(n--){
    scanf("%d %d",&a,&b);
    f2 = Beto(a,b);
    f1 = Rafael(a,b);
    f3 = Carlos(a,b);

    if(f1 > f2 && f1 > f3) printf("Rafael ganhou\n");
    else if(f2 > f1 && f2 > f3) printf("Beto ganhou\n");
    else printf("Carlos ganhou\n");
  }
  
  return 0;
}
