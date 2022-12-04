//PROGRAMA PARA CALCULAR ECUACION DE SEGUNDO GRADO
#include<stdio.h>
#include<math.h>

float Formula (double , double , double );
float Formula2 (double , double , double );


int main (){

    double  a,b,c;

    printf("Ingrese el valor de a:");
    scanf("%lf", &a);
    printf("Ingrese el valor de b:");
    scanf("%lf", &b);
    printf("Ingrese el valor de c:");
    scanf("%lf", &c);


    if (a==0)
    {
        printf("No se admite cero en la variable a, ingrese un nuevo valor para a:");
        scanf("%lf", &a);
        printf("El resultado de x1 es: %.3f.\n", Formula(a,b,c));
        printf("El resultado de x2 es: %.3f.\n", Formula2(a,b,c));
    }    
    else
    {   
        printf("El resultado de x1 es: %.3f.\n", Formula(a,b,c));
        printf("El resultado de x2 es: %.3f.\n", Formula2(a,b,c));
    }

    return 0;

}

float Formula (double a, double b, double c)
{
    double  m,r, suma, resta;
    float x1;
    m=4*(a*c);
    resta=(pow(b,2)-m);
    r=sqrt(resta);
    x1=(-b+r)/2*a;

    return x1;
}

float Formula2 (double a, double b, double c)
{
    double  m,r, suma, resta;
    float x2;
    m=4*(a*c);
    resta=(pow(b,2)-m);
    r=sqrt(resta);
    x2=(-b-r)/2*a;

    return x2;
}
