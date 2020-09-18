#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void capturar_enteros();
void mostrar_cadena(int, char *);
int main()
{
    int opc;
    do
    {
        printf("Elige una opcion...\n\n");
        printf("0. Salir\n");
        printf("1. Ingresar 5 valores enteros\n");
        printf("2. Imprimir una cadena n veces\n");
        printf("3. Capturar datos de personajes\n");
        printf("4. Mostrar datos de personajes\n");
        scanf("%i", &opc);
        switch(opc)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        }
    }
    while(opc != 0);
}
