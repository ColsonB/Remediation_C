#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float t[3][4];
float m[3];

int main()
{

    int compteur = 0;
    float tot = 0;
    float note;


    do
    {
        printf("Mettre une note:\n");
        scanf("%f", &note);
        tot = tot + note;
        compteur = compteur + 1;
    }     while (note > 0);

    if (note == 0)
    {
        tot = tot - note;
        tot = tot / (compteur - 1);
        printf("Note moyenne :%.2f\n", tot);
    }
    else
    {
        printf("Note non valide !\n");
    }

    getch();
    return 0;
}

