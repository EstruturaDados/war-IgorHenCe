#include <stdio.h>
#include <stdlib.h>
#include <string.h> //biblioteca padrão para manipulação de strings

int main(){
    struct Territorio {
        char nome[30];
        char cor[10];
        int tropas;
    };

    // Array de 5 territórios
    struct Territorio territorios[5];

    printf("=== Cadastro de territorios ===\n\n");

    // Loop para cadastrar os 5 territórios

    for(int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i+1);

        // nome do territorio
        printf("Digite o nome do territorio: ");
        fgets(territorios[i].nome, 30, stdin);
        // Remove o caracter "/n" quando se insere a informação e pressiona "enter"
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = 0;

        // cor do territorio
        printf("Digite a cor do territorio: ");
        fgets(territorios[i].cor, 10, stdin);
        // Remove o caracter "/n" quando se insere a informação e pressiona "enter"
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = 0;

        // numero de tropas
        printf("Digite o numero de tropas: ");
        scanf("%d", &territorios[i].tropas);

        // Limpa o Buffer do teclado
        getchar();

    }

    // Exibição dos dados cadastrados
    printf("=== DADOS DOS TERRITORIOS ===\n\n");

    for(int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Numero de tropas: %d\n", territorios[i].tropas);
        printf("-------------------------\n");

    }
    return 0;
};
