#include <stdlib.h>
#include <stdio.h>

int vetor[4];
int size;


void InvertVetor() {
    printf("Vetor invertido: \n");
    for(int i = 0; i <= size; i++) {
        vetor[i] = vetor[size-1];
        size--;
        printf("%d\n",vetor[i]);
    }
}

int main() {
  
  //int size;


  //do-while
  do {
    printf("Tamanho do vetor: ");
    scanf("%d", &size);

    if(size%2 != 0) {
      printf("VALOR IMPAR E NAO PODE SER ADICIONADO\n");
    }
    else {
      for(int i = 0; i < size; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
      }
      InvertVetor();

    }
  }
  while(size%2 == 0);

}
