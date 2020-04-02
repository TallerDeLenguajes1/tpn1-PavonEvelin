#include <stdio.h>

int cuadrado(int numero);
void cuadradoVoid(int numero);
void mostrar(int var);
void Invertir(int *puntA,int *puntB);
void ordenar(int *punt1, int *punt2);

int main(){

  int resultado1, numero; //declaracion punto 3a
  int var; //declaracion punto 3b
  int a,b,*puntA,*puntB; //declaracion punto 3c
  int prim, seg,*punt1,*punt2; //declaracion punto 3e
  int cantPares; //declaracion punto 3f 

  //PUNTO 3a):
  printf("Ingrese un numero\n");
  scanf("%d", &numero);
  resultado1 = cuadrado(numero);
  printf("Cuadrado de %d: %d\n\n",numero,resultado1);
  
 
  //PUNTO 3b):
  printf("Ingrese otro numero\n");
  scanf("%d", &numero);
  cuadradoVoid(numero);
  

  //PUNTO 3c):
  printf("Ingrese un numero\n");
  scanf("%d", &var);
  mostrar(var);


  //PUNTO 3d):
  printf("Ingrese los valores de a y b\n");
  scanf("%d %d",&a,&b);
  puntA = &a;
  puntB = &b;
  printf("Antes de invertir a:%d y b:%d\n", a,b);
  Invertir(puntA, puntB);
  printf("Despues de invertir a:%d y b:%d\n\n", a,b);

  
  //PUNTO 3e):
  printf("Ingrese dos numeros\n");
  scanf("%d %d", &prim, &seg);
  punt1 = &prim;
  punt2 = &seg;
  ordenar(punt1,punt2);
  
  printf("Ordenados de menor a mayor\n");
  printf("%d %d\n\n", prim, seg);


  //PUNTO 3f):
  printf("Ingrese la cantidad de pares a ordenar\n");
  scanf("%d", &cantPares);

  printf("Ingrese dos numeros\n");
  for(int i=0; i<cantPares; i++){
    scanf("%d %d", &prim, &seg);
    punt1 = &prim;
    punt2 = &seg;
    ordenar(punt1,punt2);
  
    printf("Ordenados de menor a mayor\n\n");
    printf("%d %d", prim, seg);
  }


  return 0;
}


int cuadrado(int numero){
  return(numero*numero);
}

void cuadradoVoid(int numero){
  int resultado;
  resultado = numero*numero;
  printf("Cuadrado de %d: %d\n\n",numero,resultado);
}

void mostrar(int var){
  printf("La direccion de la variable es:%p\n", &var);
  printf("El contenido de la variale es: %d\n\n", var);
}

void Invertir(int *puntA,int *puntB){
  char aux;
  aux = *puntA;
  *puntA = *puntB;
  *puntB = aux;
}

void ordenar(int *punt1, int *punt2){
  int aux;

  if(*punt1 > *punt2){
    aux = *punt1;
    *punt1 = *punt2;
    *punt2 = aux;
  }

}