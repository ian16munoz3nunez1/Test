#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define t 5
void capturar_enteros();
void mostrar_cadena(int, char *);
int main()
{
    char opc;
    do
    {
        printf("Elige una opcion...\n\n");
        printf("0. Salir\n");
        printf("1. Ingresar 5 valores enteros\n");
        printf("2. Imprimir una cadena n veces\n");
        printf("3. Capturar datos de personajes\n");
        printf("4. Mostrar datos de personajes\n");
        fflush(stdin);
        scanf("%c", &opc);
        system("cls");
        switch(opc)
        {
        case '1':
            capturar_enteros();
        break;
        case '2':
        break;
        case '3':
        break;
        case '4':
        break;
        }
        system("pause");
        system("cls");
    }
    while(opc != '0');
}
void capturar_enteros()
{
    size_t i;
    int arreglo[t], sum;
    float prom;
    sum = 0;
    for(i=0; i<t; i++)
    {
        printf("Ingresa el valor %i: ", i+1);
        scanf("%i", &arreglo[i]);
        printf("\n");
        sum += arreglo[i];
    }
    prom = sum/t;
    printf("\nValores: ");
    for(i=0; i<t; i++)
        printf("%i ", arreglo[i]);
    printf("\nSuma: %i", sum);
    printf("\nPromedio: %.2f\n\n", prom);
}
