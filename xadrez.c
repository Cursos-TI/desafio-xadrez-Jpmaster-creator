#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    int rainha = 1;
    int bispo = 1;

    // Imprime o nome da peça do xadrex.
    printf("\n==========TORRE==========\n");

    // Inicia o loop da peça torre, utilizando o comando for.
    for (int torre = 1; torre <= 5; torre++)
    {
        printf("\nDireita\n");
    }

    // Imprime o nome da peça do xadrex.
    printf("\n==========RAINHA==========\n");

    // Inicia o loop da peça Rainha, utilizando o comando while.
    while (rainha <= 8)
    {
        printf("\nEsquerda\n");
        // Incrimenta 1 para evitar loop infinito.
        rainha++;
    }

    // Imprime o nome da peça bispo.
    printf("\n==========BISPO==========\n");

    // Inicia o loop da peça bispo, utilizando o comando do-while.
    do
    {
        printf("\nCima, Direita\n");
        // Incrimenta 1 para evitar loop infinito.
        bispo++;
    } while (bispo <= 5);

    return 0;
}
