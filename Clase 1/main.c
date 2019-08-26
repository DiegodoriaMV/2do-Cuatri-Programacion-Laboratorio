#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    char letra;
    char seguir ='y';

    do
    {
        printf("ingrese una letra\n ");
        scanf("%c",&letra);
        printf("ingrese un numero entre 100 y -100 \n");
        scanf("%d",&numero);
       /*
        if(numero>100 && numero< -100)
        {
        printf("el numero es invalido");
        }
        */
    }while(seguir == 'y');




/*-----------------------------------------------------------------------------*/
//    int numero;

//    int suma = 0;
//    float promedio = 0;

//    for(int i=0;i<5;i++)
//    {
//        printf("ingrese el numero  ");
//        fflush(stdin);
//        scanf("%d",&numero);

//        suma= suma + numero;
 //   }
/*metiendo el i dentro del for abajo por obligacion tengo pone el numero de repeticiones*/
//    promedio = (float)suma / 5;/* casteo  / parcear usar el float para q lea el resto de las comas*/
//    printf("el promedio es %.2f",promedio);

    /*-------------------------------------------------------------------------*/

//    int edad;
//    char nombre[20];

//    printf("ingrese su nombre\n");
//    gets(nombre); /*<---- para los string se usa gets y toma todo y no se corta con el espacio*/
    /*scanf("%s",nombre);//no se usa & <---- no es necesario*/

//    printf("imgrese el edad\n");
//    fflush(stdin);   /*<---- hay q limpiar el buffer */
//    scanf("%d",&edad);

//    printf("su nombre es %s y la edad es %d\n",nombre,edad);


    /*-------------------------------------------------------------------------------*/

  /*
    int numero ;
    numero = 2019;

    int numeroDos;
    numeroDos = 21;

    char letra;
    letra = 'A';

    char nombre[20] = "RAMIRO";

    float precio = 125.75;

    printf("Estamos en el anio %d y es un anio dificil y la letra es %c \n", numero, letra);

    printf("su nombre es %s\n",nombre);

    printf("el precio es %.2f\n",precio);
*/
    return 0;
}
