#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void GenMatriz(int* ,int , int );
void SumaMatrices(int* , int* , int* ,int , int );
void ImpMatriz(int* ,int , int );

int main ()
{
    int n,m;
    int* A; int* B; int* C; 
    srand(time(NULL));

    puts("Ingresa el tamano de la matriz rectangular (tamano de filas y columnas no deben coincidir):");
    scanf("%d%d",&n, &m);

    if (n!=m)
    {
        puts("La matriz A es:");
        GenMatriz(A,n,m);
        ImpMatriz(A,n,m);
        puts("La matriz B es:");
        GenMatriz(B,n,m);
        ImpMatriz(B,n,m);
        puts("la suma de matrices A+B es:");
        SumaMatrices(A,B,C,n,m);
        ImpMatriz(C,n,m);
    }
    else
    {
        puts("Error, el tamano de la matriz no debe corresponder a una matriz cuadrada");
    }

return 0;
}

void GenMatriz(int* A,int n, int m)
{
    A=(int *)malloc(n*m*sizeof(int));
    for(int j=0;j<n;j++){
       for(int i=0;i<m;i++)
            A[j*n+i]=rand()%100;
    }
}

void SumaMatrices(int* A, int* B, int* C,int n, int m)
{
    C=(int *)malloc(n*m*sizeof(int));
    for(int j=0;j<n;j++)
    {
       for(int i=0;i<m;i++)
       {
          C[j*n+i]=A[j*n+i]+B[j*n+i];
          printf("%d\t",C[j*n+i]);
       }
    printf("\n");
    }
}

void ImpMatriz(int* A, int n, int m)
{
    int i,j;
    for(j=0;j<n;j++){
       for(i=0;i<m;i++)
           printf("%d\t",A[j*n+i]);
       printf("\n");
    }
}