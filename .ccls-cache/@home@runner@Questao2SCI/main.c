#include <stdio.h>

int main(void) {
  int maior, menor;
  int numeros[5];
  printf("Digite 5 numeros: \n");
  // Insercao de numeros no vetor
  for (int i = 0; i < 5; i++) {
    scanf("%d", &numeros[i]);
  }
  // Definicao de maior e menor
  maior = numeros[0];
  menor = numeros[0];
  for (int i = 0; i < 5; i++) {
    if (numeros[i] > maior) {
      maior = numeros[i];
    } else if (numeros[i] < menor) {
      menor = numeros[i];
    }
  }
  // Impressao de valores maior e menor
  printf("Menor numero: %d\n", menor);
  printf("Maior numero: %d\n", maior);
  return 0;
}