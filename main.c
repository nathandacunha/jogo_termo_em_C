#include <stdio.h>
#include <stdlib.h>

#define VERDE "\033[42;30m"
#define AMARELO "\033[43;30m"
#define BRANCO "\033[47;30m"
#define RESET "\033[0m"

int main() 
{
    char palavras[10][6] = {
        "CASAS", "CARRO", "LIVRO", "MUNDO", "PEDRA",
        "PRETO", "PRATA", "NUVEM", "FOLHA", "GATOS" 
    };
    char palavraSorteado[5];
    char palavraDoUsuario[5];
    int quantidadesDeTentativas = 0;

    printf("============================\n");
    printf("[] [] [] [] []\n");
    printf("[] [] [] [] []\n");
    printf("[] [] [] [] []\n");
    printf("[] [] [] [] []\n");
    printf("[] [] [] [] []\n");

    printf("Digite uma palavra em maisculo: \n");
    scanf("%s", palavraDoUsuario);

    return 0;
}