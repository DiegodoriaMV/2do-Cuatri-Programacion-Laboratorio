#include <stdio.h>
#include <stdlib.h>

char mostrarMenu();
int main()
{

    char seguir = 's';

    do
    {
    /*
    system("cls");
    printf("\nmenu de opciones \n");
    printf("\na. sumar\n");
    printf("\nb. restar\n");
    printf("\nc. multiplicar\n");
    printf("\nd. dividir\n");
    printf("\ne. salir\n");
    printf("\nIngrese opcion\n");
    opcion = getche();
*/


        switch(mostrarMenu())
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
            fflush(stdin);
            seguir = getche();
            system("pause");
            break;

        default:
            printf("\nopcion invalida\n");
            break;
        }
      }while(seguir == 's');

    return 0;
}

char mostrarMenu()
{

char opcion;
    system("cls");
    printf("\n ---menu de opciones-- \n \n a. sumar\n \n b. restar\n \n c. multiplicar\n \n d. dividir\n \n e. salir\n \nIngrese opcion\n");

   opcion = getchar();
   return opcion;
}

