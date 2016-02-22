#include <iostream>
#include <cstdio>
#include <cmath>
#include <bitset>
#include <string>
using namespace std;

void binary(string s){
  int decimal = 0, j = 0;
  for(int i = (int)s.size()-1; i >= 0; i--,j++)
    if(s[i] == '1')
      decimal += pow(2,j);
  cout << decimal << " dec\n";
  printf("%x hex\n",decimal);
}

void decimal(string s){
  printf("%x hex\n",stoi(s));
  string b; int n = stoi(s);
  for(;n>0;n/=2)
    b = to_string(n%2)+b;
  cout << b << " bin\n";
}

void hexa(string s){
  int decimal = 0, n;
  for(int i = (int)s.size()-1, j = 1; i >= 0; i--, j *= 16){
    if(s[i] == 'f') decimal += 15*j;
    else if(s[i] == 'e') decimal += 14*j;
    else if(s[i] == 'd') decimal += 13*j;
    else if(s[i] == 'c') decimal += 12*j;
    else if(s[i] == 'b') decimal += 11*j;
    else if(s[i] == 'a') decimal += 10*j;
    else decimal += ((int)s[i]-'0')*j;
  }
  string b; n = decimal;
  for(;n>0;n/=2)
    b = to_string(n%2)+b;
  cout << decimal << " dec\n" << b << " bin\n";
}

int main(){
  int n; scanf("%d",&n); string num, s;

  for(int caso = 1; caso <= n; caso++){
    cin >> num >> s;
    printf("Case %d:\n",caso);
    if(s == "bin") binary(num);
    else if(s == "dec") decimal(num);
    else hexa(num);
    cout << endl;
  }
  
  return 0;
}
