/*
  
  Operaciones Bitwise

  AND (a & b) : Equivale a una conjunción lógica bit a bit.
  LEFT SHIFT x = (a << b) : Da a x el valor de mover a, b bits a la izquierda.
  OR (a |= b) : Equivale a: a = a | b. El OR ( | ) es una disyunción lógica inclusiva.
  
*/

#include <iostream>
using namespace std;

int main(){
  unsigned int n;
  
  while(cin >> n && n != 0){
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < 31; i++){
      if((n & (1 << i)) != 0){
	/* ((n & (1 << i)) != 0)
	   Checa que n, en la posición i, de derecha a izquierda, empezando
	   con el bit menos significativo como índice 0, sea uno.
	 */
	if(c%2 == 0) a |= 1 << i;
	else b |= 1 << i;
	/*
	  a |= 1 << i
	  El valor de a es, lo que sea a, y se "agregan" los unos del shift.
	 */
	c++;
      }
    }
    cout << a << " " << b << endl;
  }
  return 0;
}
