#include <stdio.h>
#include <stdlib.h>

struct sis {
    char nome[20];
    unsigned long long numero;
};

int main() {
    struct sis sistema[5];
    int i, op;

do {
    printf("## Sistema de contactos ##\n");
    printf("1- Adicionar Contactos\n");
    printf("2- Mostrar Contactos\n");
    printf("3- Sair\n\n");
    printf("Opcao: ");
    scanf("%d", &op);

    switch(op) {
        case 1:
            for(i = 0; i < 5; i++) {
                printf("Nome: ");
                fflush(stdin);
                fgets(sistema[i].nome, 20, stdin); // sistema[i] ocupa as 5 posições do vetor "sistema" da estrutura "sis"
                printf("Numero: ");
                fflush(stdin);
                scanf("%llu", &sistema[i].numero);
                printf("\n\n");
            }
            break;
        case 2:
            system("cls");
            printf("Lista: \n\n");
            for(i = 0; i < 5; i++) {
                printf("Nome: %s", sistema[i].nome);
                printf("Numero: %llu", sistema[i].numero);
                printf("\n\n");
            }
            break;
        case 3:
            system("exit");
            break;
        default:
            printf("Escolha invalida.");
            break;
    }
}
while(op != 3);
    
}