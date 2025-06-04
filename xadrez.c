#include <stdio.h>

int main() {

    int torre = 0 ;
    int bispo = 0 ;
    int rainha = 0 ;

    while (torre < 5)
    {
        printf("Torre : Direita\n");
        torre++;
    }



    do
    {
        printf("Bispo : Cima , Direita\n");
        bispo++;

    } while (bispo < 5);

    


    for (rainha = 0; rainha < 8; rainha++)
    {
        printf("Rainha : Esquerda \n");
    }
    
    
    



    return 0;
}
