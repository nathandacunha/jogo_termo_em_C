#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define VERDE "\033[42;30m"
#define AMARELO "\033[43;30m"
#define BRANCO "\033[47;30m"
#define RESET "\033[0m"

#define TOTAL_PALAVRAS 10
#define TENTATIVAS 6
#define TAMANHO_PALAVRAS 5
#define TAMANHO_INDICE_SORTEADO 9

int main()
{
    // declaracao de variaveis e arrays
    const char listaDePalavras[TOTAL_PALAVRAS][TAMANHO_PALAVRAS+1] = {
        "COISA", "FORCA", "SAGAZ", "CACHE", "UDESC",
        "MISTO", "CHUVA","ARARA", "DADOS", "GRIFO"
    };

    const int COR_VERDE = 0;
    const int COR_AZUL = 1;
    const int COR_AMARELO = 2;

    char tentativas[TOTAL_PALAVRAS][TAMANHO_PALAVRAS+1];
    char palavraSecreta[TAMANHO_PALAVRAS + 1];
    int resultado[TOTAL_PALAVRAS][TAMANHO_PALAVRAS+1];
    int totalDeTentativas = 0;
    int acertou = 0;

    // programa principal

    // escolhendo a palavra aleatoria
    srand(time(NULL));

    //sorteando o indice entre 0 a 9
    const int indiceSorteado = rand() % TOTAL_PALAVRAS;

    // copiando o conteudo da palavra escolhida da lista para a variavel "palavraSecreta"
    strcpy(palavraSecreta, listaDePalavras[indiceSorteado]);

    printf("JOGO DO TERMO \n");
    printf("\n");
    printf("===================\n");

    printf("Palavra escolhida: %s\n", palavraSecreta);
    // imprimindo os [] seis vezes
    for(int i = 0; i < 6; i++)
    {
        printf("\n");
        printf("[] [] [] [] [] \n");
    }

    while((totalDeTentativas < TENTATIVAS) && (acertou != 1))
    {
        printf("Tentativas %d de %d: \n", totalDeTentativas + 1, TENTATIVAS);
        scanf("%s", &tentativas);

        // comparacao de cada letra com a palavra secreta
        for(int i = 0; i < TAMANHO_PALAVRAS; i++)
        {
            char letra = tentativas[totalDeTentativas][i];

            if(letra == palavraSecreta[i])
            {
                resultado[totalDeTentativas][i] = COR_VERDE;
            } else {
                resultado[totalDeTentativas][i] = COR_AZUL;
                for(int j = 0; j < TAMANHO_PALAVRAS; j++)
                {
                    if(letra == palavraSecreta[j]) {
                        resultado[totalDeTentativas][i] = COR_AMARELO;
                        break;
                    }
                }
            }
        }
        totalDeTentativas++;
    }

    return 0;
}
