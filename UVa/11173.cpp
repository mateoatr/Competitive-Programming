#include <cstdio>

inline void fastread(unsigned int &x){
  register unsigned int c = getchar_unlocked();
  x = 0;
  for(; ((c<48||c>57));c=getchar_unlocked());
  for(;c>47&&c<58;c=getchar_unlocked()) x = (x<<1)+(x<<3)+c-48;
}

int main(){
  unsigned int i, t, n; fastread(t);
  for(i=0;i<t;i++){
    fastread(n); fastread(n);
    printf("%d\n",(n>>1)^n);
  }
  return 0;
}
