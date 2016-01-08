#include <stdio.h>
using namespace std;

inline void fast_int_read(unsigned int &x){
  register unsigned int c = getchar_unlocked();
  x = 0;
  for(; ((c<48||c>57));c=getchar_unlocked());
  for(;c>47&&c<58;c=getchar_unlocked()) x = (x<<1)+(x<<3)+c-48;
}

int main(){
  unsigned int n, p;
  while(true){
    fast_int_read(n);
    if(n == 0) break;
    else if(n == 1) printf("1\n");
    else{
      p = n;
      p--;
      p |= p >> 1;
      p |= p >> 2;
      p |= p >> 4;
      p |= p >> 8;
      p |= p >> 16;
      p++;
      printf("%d\n",(n-(p - p/2))*2);
    }
  }
}
