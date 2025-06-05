#include <stdio.h>

int main()
{
    //Variaveis para o Xadrez

    int torre = 0;
    int bispo = 0;
    int rainha = 0;
    int cavalo = 0;

    //Movimentação das Peças

    while (torre < 5) // Move a torre 5 vezes a direta
    {
        printf("Torre : Direita\n");
        torre++;
    }

    do // Move o bispo 5 vezes para cima e para a direita
    {
        printf("Bispo : Cima , Direita\n");
        bispo++;

    } while (bispo < 5);

    for (rainha = 0; rainha < 8; rainha++) // Move a rainha 8 vezes para a esquerda
    {
        printf("Rainha : Esquerda \n");
    }

    while (cavalo < 1) // Move o cavalo para a esquerda
    {
        for (int i = 0; i < 2; i++) // Move o cavalo 2 vezes para baixo
        {
            printf("Cavalo : Baixo\n");
        }
        printf("Cavalo : Esquerda\n");
        cavalo++;
    }
    

    return 0;
}


