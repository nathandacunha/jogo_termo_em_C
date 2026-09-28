#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERDE "\033[42;30m"
#define AMARELO "\033[43;30m"
#define BRANCO "\033[47;30m"
#define RESET "\033[0m"

int main() 
{
    const char palavras[10][6] = {
        "CASAS", "CARRO", "LIVRO", "MUNDO", "PEDRA",
        "PRETO", "PRATA", "NUVEM", "FOLHA", "GATOS" 
    };

    char palavraDoUsuario[5];
    char palavraSecreta[5];
    int quantidadesDeTentativas = 0;
    int ehIgual;
    
    printf("============================\n");
    for(int i = 0; i < 5; i++) {
        printf("[] [] [] [] []\n");
    }

    printf("Digite uma palavra em maisculo: \n");
    scanf("%s", palavraDoUsuario);

    // comparando as strings palavraUsuario com palavraSecreta
    do {
        ehIgual = strcmp(palavraDoUsuario, palavraSecreta); 
    } while(quantidadesDeTentativas < 5);


    return 0;
}