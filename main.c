#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int entrada1, entrada2, resultado;
  printf("Ingresa un numero\n");
  scanf("%d",&entrada1);
  printf("Ingresa otro numero\n");
  scanf("%d",&entrada2);
  int menu;
  do {
  printf("Que quieres hacer con esos 2 numeros\n");
  printf("1 Sumar\n");
  printf("2 restar\n");
  printf("3 multiplicar\n");
  printf("0 salir\n");
  scanf("%d",&menu);

    switch (menu) {
    case 1:
      resultado=entrada1+entrada2;
      printf("El resultado de tu operacion es: %d\n",resultado);
      break;
    case 2:
      resultado=entrada1-entrada2;
      printf("El resultado de tu operacion es: %d\n",resultado);
      break;
    case 3:
      resultado=entrada1*entrada2;
      printf("El resultado de tu operacion es: %d\n",resultado);
      break;
    default:
      printf("Operacion no valida\n");
      break;
    case 0:
      printf("Adios <3\n");
      break;
    } 
  } while (menu!=0);
  return 0;
}
