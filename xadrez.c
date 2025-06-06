#include <stdio.h>

void MoverBispo(int casas) // Recursividade para Mover Bispo
{
    if(casas > 0){
        printf("Bispo : Cima\n");
        MoverBispo(casas - 1);
    }
}
void MoverTorre(int casas) //Recursividade para Mover Torre
{
    if(casas > 0){
        printf("Torre : Direita\n");
        MoverTorre(casas - 1);
    }
}
void MoverRainha(int casas) //Recursividade para Mover Rainha
{
    if(casas > 0){
        printf("Rainha : Esquerda\n");
        MoverRainha(casas - 1);
    }
}
void MoverCavalo(int casas) //Recursividade para Mover Cavalo
{
        while (casas < 1) 
    {
        for (int i = 0; i < 2; i++) 
        {
            printf("Cavalo : Baixo\n");
        }
        printf("Cavalo : Esquerda\n");
        casas++;
    }
}

int main()
{
    //Variaveis para o Xadrez

    int torre = 0;
    int bispo = 0;
    int rainha = 0;
    int cavalo = 0;

    //Movimentação das Peças

    MoverBispo(5);
    printf("==========================\n");
    MoverCavalo(0);
    printf("==========================\n");
    MoverRainha(8);
    printf("==========================\n");
    MoverTorre(5);

    return 0;
}


