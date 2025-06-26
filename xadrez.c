#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    int rainha = 1;
    int bispo = 1;



    printf("\n==========TORRE==========\n");

    for (int torre = 1; torre <= 5; torre++)
    {
        printf("\nDireita\n");
    }
    
    
    printf("\n==========RAINHA==========\n");

    while (rainha <= 8)
    {
        printf("\nEsquerda\n");
        rainha++;
    }

    printf("\n==========BISPO==========\n");

    do
    {
        printf("\nCima, Direita\n");
        bispo++;
    } while (bispo <= 5);
    


    return 0;
}
