#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int X; // SEM casa decimal, número inteiro
  float Y; // COM casa decimal, número real

  char A; // CARACTERE único
  char B [40]; // STRING, vários caracteres

  printf("Digite um número inteiro: ");
  scanf("%d", &X);
  printf("A variável X possui o valor: %d\n", X);

  printf("Digite um número real (com casa decimal, separado por vírgula): ");
  scanf("%f", &Y);
  printf("A variável Y possui o valor: %f\n", Y);

  printf("Digite um caractere: ");
  scanf(" %c", &A);
  printf("A variável A possui o valor: %c\n", A);

  printf("Digite um nome: ");
  scanf(" %s", B);
  printf("A variável B possui o valor: %s\n", B);

  return 0;
}