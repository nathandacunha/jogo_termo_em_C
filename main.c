#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define VERDE "\033[42;30m"
#define AMARELO "\033[43;30m"
#define BRANCO "\033[47;30m"
#define RESET "\033[0m"

int main()
{
    // declaracao de variaveis e matrizes
    int quantidadeTentativas = 0;
    const char listaDePalavras[10][6] = {
        "CASAS", "CARRO", "LIVRO", "MUNDO", "PEDRA",
        "PRETO", "PRATA", "NUVEM", "FOLHA", "GATOS"
    };
    char tentativasDoUsuario[5];

    // inicializando a semente do gerador aleatorio
    srand(time(NULL));

    // sorteando o indice entre 0 a 9
    int indiceSorteado = rand() % 10;

    // printf("Palavra sorteado: %s\n", listaDePalavras[indiceSorteado]);

    printf("============================\n");
    for (int i = 0; i < 5; i++)
    {
        printf("[] [] [] [] []\n");
    }

    // Solicitando ao usuário uma palavra

    return 0;
}