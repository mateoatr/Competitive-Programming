#include <cstdio>
#include <cstdlib>
using namespace std;

int gcd(int a, int b){
  return b == 0 ? a : gcd(b,a%b); }

int main(){
  char d1,d2,op;
  int t,a,b,c,d,g,r1,r2; scanf("%d",&t);
  while(t--){
    scanf("%d %c %d %c %d %c %d",&a,&d1,&b,&op,&c,&d2,&d);
    if(op == '*'){
      r1 = a*c; r2 = b*d;
      g = gcd(r1,r2);
      printf("%d/%d = %d/%d\n",r1,r2,r1/g,r2/g);
    }
    else if(op == '/'){
      r1 = a*d; r2 = b*c;
      g = gcd(r1,r2);
      printf("%d/%d = %d/%d\n",r1,r2,r1/g,r2/g);
    }
    else if(op == '+'){
      r1 = ((a*(b*d))/b) + ((c*(b*d))/d); r2 = b*d;
      g = gcd(r1,r2);
      printf("%d/%d = %d/%d\n",r1,r2,r1/g,r2/g);
    }
    else{
      r1 = ((a*(b*d))/b) - ((c*(b*d))/d); r2 = b*d;
      g = gcd(r1,r2);
      if(r1 < 0 || r2 < 0) printf("-%d/%d = -%d/%d\n",abs(r1),abs(r2),abs(r1/g),abs(r2/g));
      else printf("%d/%d = %d/%d\n",abs(r1),abs(r2),abs(r1/g),abs(r2/g));
    }
  }
}
