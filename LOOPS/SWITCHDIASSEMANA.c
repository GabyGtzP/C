#include <stdio.h>
#include <string.h>

int main()
{

int NumDia;
char dia[10];//si fuera char: char opcion;
printf("Ingrese dia de la semana: ");
scanf("%d", &NumDia);

    switch( NumDia ){//(opcion)
    case 1:// case 'a':
        strcpy(dia, "Lunes"); // asigno a dia la cadena "Lunes"
        break;

    case 2:
        strcpy(dia, "Martes"); // asigno a dia la cadena "Martes"
        break;

    case 3:
        strcpy(dia, "Miercoles");
        break;

    case 4:
        strcpy(dia, "Jueves");
        break;

    case 5:
        strcpy(dia, "Viernes");
        break;

    case 6:
        strcpy(dia, "Sabado");
        break;

    case 7:
        strcpy(dia, "Domingo");
        break;
    }

    printf("El numero %d es el dia: %s.\n", NumDia, dia);
return 0;

}