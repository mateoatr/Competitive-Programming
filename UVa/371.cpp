#include <cstdio>
using namespace std;
typedef long long LL;

LL ackerman(LL x){
  for(LL i = 1;;){
    if(x%2==0) x/=2;
    else x = (x*3)+1;
    i++;
    if(x == 1) return --i;
  }
  return 0;
}

int main(){
  LL a, b, n, m, indice, x;
  
  while(scanf("%lld %lld",&a,&b) && (a+b != 0)){
    if(a > b){ x = a; a = b; b = x; }
    m = 0;
    for(LL i = a; i <= b; i++){
      n = ackerman(i);
      if(n > m){ m = n; indice = i; }
    }
    
    printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,indice,m);
  }

  return 0;
}
