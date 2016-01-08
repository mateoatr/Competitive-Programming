#include <cstdio>
#include <cmath>

inline void fastread(unsigned int &x){
  register unsigned int c = getchar_unlocked();
  x = 0;
  for(; ((c<48||c>57));c=getchar_unlocked());
  for(;c>47&&c<58;c=getchar_unlocked()) x = (x<<1)+(x<<3)+c-48;
}

int main(){
  unsigned long long k, s; unsigned int n;
  fastread(n);
  while(n != 0){
    k = (sqrt((8*n)+1)-1)/2 + 1;
    s = (k*(k+1))/2;
    printf("%llu %llu\n",s-n,k);
    fastread(n);
  }
  return 0;
}
