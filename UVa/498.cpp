#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <math.h>

long c[1000], n;

long countForX(long x){
  long i, res=0;
  for (i = 0; i<n; i++)
    res+=c[i]*pow(x,n-i-1);

  return res;
}

int main(){
  char line[10000], *p;
  while (gets(line)!=NULL){
    c[0] = atol(p = strtok(line," "));
    for (n = 1; (p = strtok(NULL," "))!=NULL; n++)
      c[n] = atol(p);

    gets(line);
    printf("%ld",countForX(atol(p = strtok(line," ") )));
    while ((p = strtok(NULL," "))!=NULL)
      printf(" %ld",countForX(atol(p)));

    puts("");
  }  return 0;
}
