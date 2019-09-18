#include <stdio.h>
#include <stdlib.h>

#define <conio.h>
#define <string.h>

#define TAM 5
typedef struct
{
    int legajo;
    char nombre[20];
    int edad;
    char sexo;
    int nota1;
    int nota2;
    float promedio;
    eFecha fechaIngreso;


    }eAlumno;

void mostrarAlumno(alumno x);

int menu ();
int main()
{
    eAlumno lista[TAM]
    char seguir = 's';
    do{
        switch(menu())
        {
            case 1:
               // printf("alta alumno");
                altaAlumno(lista,TAM);
            break;
            case 2:
                bajaAlumno(lista,TAM);
                // printf("baja alumno");
            break;
            case 3:
                printf("modificar alumno");
            break;
            case 4
                printf("alta alumno");
            break;
            case 5:
                printf("ordenar alumno");
            break;
            case 6:
                printf("Informes ");
            break;
            case 7:
                printf(" Confirmar salida ");
                fflush(stdin);
                salir = getch();
            break;
            default:
                printf("opcion invalida");
        }
    }while(seguir !='s');

    return 0;
}

int menu ()
{
    system("cls");
    printf("menu de opcines\n\n");
    printf("1- alta alumno");
    printf("2- Baja alumno");
    printf("3- modificar alumno");
    printf("4- lista de alumno");
    printf("5- ordenar alumno");
    printf("6- informer \n");
    printf("7-  SALIR");
    printf("Ingrese opcion");
    scanf()
}
void inicializarAlumnos(eAlumno alumnos[], int tam){
}
int buscarLibre(eAlumno alimno[], int tam)
{
    int indice = -1;
    int i;
    for(i=0;i<tam; i++)
    {
        if(alumnos[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
int buscarAlumno(int legajo, eAlumno alimno[], int tam)
{
    int indice = -1;
    int i;
    for(i=0;i<tam; i++)
    {
        if(alumnos[i].isEmpty == 0 && alumnos[i].legajo )
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int altaAlumno(eAlumno alumnos[],int tam)
{
    int todoOk = 0;
    int indice;
    int esta;

    int legajo;
    int edad;
    int n1;
    int n2;
    char sexo;
    char nombre[20];
    eFecha fecha;
    eAlumno nuevoAlumno;

    indice = buscarLibre(alumnos,tam);
    if(indice == -1)
    {
        printf("sistema completo no se puede agregar mas alumnos");
        system("pause");
    }
    else{printf("ingrese el legajo: ");
        scanf("%d", &legajo);

        esta= buscarAlumno(legajo, alumnos,tam);
        if( esta != -1)
        {
            printf("legajo ya registrado\n");
            mostrarAlumno(alumnos[esta]);
        }
        else{
            printf("ingrese nombre: ");
            fflush(stdin);
            gets(nombre);

            printf("ingrese edad: ");
            fflush(stdin);
            scanf("%d",&edad);

            printf("ingrese sexo: ");
            fflush(stdin);
            scanf("%c", &sexo);

            printf("ingrese nota 1: ");
            fflush(stdin);
            scanf("%d",&nota1;);

            printf("ingrese fecha de ingreso : dd/mm/aa");
            scanf("%d%d%d",&fecha.dia %fecha.mes %fecha.año);

            alumnos[indice] =newAlumno()
        }
    }
}
eAlumno newAlumno (int nombre[], char sexo, int edad, int n1, int nota2, eFecha fecha)
{
    eAlumno nuevoAlumno;
    nuevoAlumno.legajo = legajo;
    strcpy(nuevoAlumno.nombre, nombre);
    nuevoAlumno.edad = edad;
    nuevoAlumno.sexo = sexo;
    nuevoAlumno.nota1 = n1;
    nuevoAlumno.nota2 = n2;
}

// bajjjaa

int bajaAlumno(eAlumno alumno[], int tam)
{
    int todoOK= 0;
    int indice;
    int legajo;
    printf("ingrese el legajo : ")
    scanf("%d",&legajo);

    system("cls");
    printf("**** baja ALUMNO***");
    int = buscarAlumno(legajo, alumno, tam);
    if (indice == -1)
    {
        printf("NO TENEMOS RESGISTRADO ESE LEGAJO");
        system("pause");
    }else
    {
        mostrarAlumno(alumnos[indice]);
        printf("confirma eliminacion");
        fflush(stdin);
        confirma = getche();

        if(confirma == 's')
        {
            alumnos[indice].isEmpty = 1;
            printf("se ha eliminado el alumno");
            todoOK = 1;
        }else
        {
            printf("se cancelo la naja");
        }

    }

    return todoOK;


}
