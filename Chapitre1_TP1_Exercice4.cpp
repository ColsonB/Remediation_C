#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int N, somme, total;
    total = 0;
    N = 0;
    sommme = 0;

    while (N < 1)
    {
        printf("Entrez un chiffre sup�rieur ou �gal � 1 \n");
        scanf("%d", &N);
    }
    while (somme < N)
    {
        total++;
        printf("%d\n", total, somme++);

    }
}