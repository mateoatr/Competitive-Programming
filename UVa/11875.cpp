#include <cstdio>
#include <algorithm>

inline void fastread(unsigned int &x){
  register unsigned int c = getchar_unlocked();
  x = 0;
  for(; ((c<48||c>57));c=getchar_unlocked());
  for(;c>47&&c<58;c=getchar_unlocked()) x = (x<<1)+(x<<3)+c-48;
}

int main(){
  unsigned int T, N, edad[15]; fastread(T);
  for(unsigned int i = 1; i <= T; i++){
    fastread(N);
    for(unsigned int j = 0; j < N; j++)
      fastread(edad[j]);
    std::sort(edad, edad+N);
    printf("Case %d: %d\n", i, edad[N/2]);
  }
  return 0;
}
