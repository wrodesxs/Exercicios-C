#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <stdbool.h>

struct S_MF {
  int nfiles;
};

int main() {
  
  struct S_MF MF;

  char filename[50];
  char dir1[100];
  char dir2[100];
  FILE *file; //-> variavel a ser usada para ver se ficheiros existem ou nao
  int i;
  bool localizado;

  
  printf("Uma maneira mais facil de mover ficheiros para pessoas que querem comecar com o terminal\n\n\n");
  printf("fonte: ");
  scanf("%s", &dir1[100]);

  printf("destino: ");
  scanf("%s", &dir2[100]);

  printf("Numero de ficheiros a serem movidos: ");
  scanf("%d", &MF.nfiles);

  for(i = 0; i < MF.nfiles; i++) {
      printf("Nome de ficheiro: ");
      scanf("%s", &filename[i]);
  }

  for(i = 0; i < MF.nfiles;  i++) { //Loop para verificar se os ficheiros existem ou nao
      file = fopen(filename, "w");

      if(file == NULL) {
        localizado = false;
        printf("FICHEIRO NAO EXISTE\n");
      }
      else {
        localizado = true;
        printf("FICHEIRO EXISTE E PODE SER COPIADO\n\n");
        fclose(file);
      }
  }
    
  DIR *src = opendir(dir1);

  if(src == NULL) {
    printf("NAO FOI POSSIVEL ENCONTRAR O DIRETORIO");
    return 0;
  }
  else {
    if(strlen(dir2) > 0) {
      printf("DIRETORIO DE DESTINO EXISTE\nFICHEIROS COPIADOS COM SUCCESSO\n\n");


    }
  }

}
