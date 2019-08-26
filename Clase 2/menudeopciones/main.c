#include <stdio.h>
#include <stdlib.h>

int main()
{

    char opcion;
    char seguir = 's';

    do
    {
    system("cls");
    printf("\nmenu de opciones \n");
    printf("\na. sumar\n");
    printf("\nb. restar\n");
    printf("\nc. multiplicar\n");
    printf("\nd. dividir\n");
    printf("\ne. salir\n");
    printf("\nIngrese opcion\n");
    opcion = getche();

        switch(opcion)
        {
        case 'a':
            printf("\nSUMASTE\n");
            system("pause");
            break;
        case 'b':
            printf("\nrestaste\n");
            system("pause");
            break;
        case 'c':
            printf("\nmultiplicaste\n");
            system("pause");
            break;
        case 'd':
            printf("\ndividiste\n");
            system("pause");
            break;
        case 'e':
            printf("\nsaliste\n");
            seguir = 'n';
            system("pause");
            break;

        default:
            printf("\nopcion invalida\n");
            break;
        }
      }while(seguir == 's');

    return 0;
}
