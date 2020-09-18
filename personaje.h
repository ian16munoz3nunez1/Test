#ifndef PERSONAJE_H
#define PERSONAJE_H
#include<stdio.h>
#define t 5
struct Personaje
{
    char nom[50], tipo[40];
    int fuerza, salud;
}p[t];
unsigned int cont = 0;

void capturar_personaje()
{
    if(cont<t)
    {
        printf("Ingresa el nombre del personaje: ");
        fflush(stdin);
        gets(p[cont].nom);
        strupr(p[cont].nom);
        printf("\nIngresa el tipo de personaje: ");
        fflush(stdin);
        gets(p[cont].tipo);
        strupr(p[cont].tipo);
        printf("\nIngresa la fuerza de %s: ", p[cont].nom);
        scanf("%i", &p[cont].fuerza);
        printf("\nIngresa la salud de %s: ", p[cont].nom);
        scanf("%i", &p[cont].salud);
        printf("\n----------------------------------------------------------------\n\n");
        cont++;
    }
    else
        printf("\n\nEl arreglo de personajes esta lleno...\n\n");
}
void mostrar_personaje()
{
    size_t i;
    for(i=0; i<cont; i++)
    {
        printf("Nombre: %s", p[i].nom);
        printf("\nTipo: %s", p[i].tipo);
        printf("\nFuerza: %i", p[i].fuerza);
        printf("\nSalud: %i", p[i].salud);
        if(cont>0)
            printf("\n---------------------------------------------------\n");
    }
}
#endif // PERSONAJE_H
