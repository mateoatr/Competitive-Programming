#include <cstdio>
#include <cstring>
#include <ctype.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  char read[1024];
  int c = 1;
  vector<pair<int,char> > a;
  int max = 1;

  while(gets(read)){
    sort(read, read+int(strlen(read)));
    for(int i = 1; i <= int(strlen(read)); i++){
      if((read[i] == read[i-1]) && (isalpha(read[i]))){
	c++;
      }
      else if(isalpha(read[i-1])){
	a.push_back(pair<int,char>(c,read[i-1]));
	if(c >= max)
	  max = c;
	c = 1;
      }

      if((i == int(strlen(read))-1)&&(c!=1)&&(isalpha(read[i]))){
	a.push_back(pair<int,char>(c,read[i]));
	if(c >= max)
	  max = c;
	c = 1;
      }
    }
    
    for(int i = 0; i < int(a.size()); i++)
      if(a[i].first == max)
	printf("%c",a[i].second);
    printf(" %i\n",max);

    max = 1;
    a.clear();
  }
  return 0;
}
      
  
