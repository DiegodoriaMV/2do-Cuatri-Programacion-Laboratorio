#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    char sexo;
    char nombre [20];
    char seguir = 's';

    int contador = 0;

    char sexoMayor;
    int notaMen;
    int notaMay;
    int promedio;

    do
    {
        printf("ingrese el nombre\n");
        fflush(stdin);
        gets(nombre);

        printf("Ingrese nota de 0 a 10 \n");
        fflush(stdin);
        scanf("%d",&nota);
        while(nota < 0 || nota > 10)
        {
            printf("ERROR, Ingrese nota de 0 a 10 \n");
            fflush(stdin);
            scanf("%d",&nota);
        }

        printf("ingrese sexo 'm' o 'f' \n");
        fflush(stdin);
        scanf("%c", &sexo);

        while(sexo != 'f' && sexo != 'm')
        {
            printf("Error ,Ingrese sexo 'm' o 'f' \n");
            fflush(stdin);
            scanf("%c", &sexo);
        }
/*
        if( flag == 0)
        {
            notaMay = nota;
        }
        else
        {
            if(nota > notaMay)
            {
                notaMay = nota;
            }
        }
*/

    printf("%s %d %c", nombre , nota , sexo);
/*
*/


        printf("\nQuiere seguir?\n");
        fflush(stdin);
        scanf("%c", &seguir);
        //seguir = getch();

    }while(seguir == 's');


    return 0;
}
