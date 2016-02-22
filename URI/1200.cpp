#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct nodo{
  char dato;
  struct nodo* izquierda;
  struct nodo* derecha;
};

struct nodo* nuevoNodo(char dato){
  struct nodo* nodo = (struct nodo*)malloc(sizeof(struct nodo));
  nodo->dato = dato;
  nodo->izquierda = NULL;
  nodo->derecha = NULL;
  return nodo;
};

void postorder(struct nodo* nodo){
  if(nodo == NULL) return;
  postorder(nodo->izquierda);
  postorder(nodo->derecha);
  printf("%c ", nodo->dato);
}

void inorder(struct nodo* nodo){
  if(nodo == NULL) return;
  inorder(nodo->izquierda);
  printf("%c ", nodo->dato);
  inorder(nodo->derecha);
}

void preorder(struct nodo* nodo){
  if(nodo == NULL) return;
  printf("%c ", nodo->dato);
  preorder(nodo->izquierda);
  preorder(nodo->derecha);
}

int main(){
  char empieza1, empieza2;
  scanf("%c %c",&empieza1, empieza2);
  struct nodo *root = nuevoNodo(empieza2);

  
  
  return 0;
}
