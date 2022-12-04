#include<stdio.h>

int main ()
{
    int counter=1;
    float num=0, sum=0, max=0, min=0, pr=0; 

    printf("Introduzca el primer valor (-1 para finalizar): ");
    scanf("%f", &num);

    while(num!=-1){
        if (counter==1){
            max=num;
            min=num;
        }
        else{
            if(num>max)
                max=num;
            if(num<min)    
                min=num;
        }
        counter++;
        sum+=num;
        printf("Introduzca el valor %d: ", counter);
        scanf("%f",&num);
    }
    counter--;
    pr=(sum/counter);
    if(counter==0)
        printf("El promedio es:0");
    else
        printf("El promedio es: %.3f\n",pr);
    
    printf("El mayor es: %.3f.\n",max);
    printf("El menor es: %.3f.\n",min);

    return 0;
}