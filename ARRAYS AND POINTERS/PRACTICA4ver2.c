#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void GenMatriz(int [][100],int );
void SumaMatrices(int [][100], int [][100], int [][100],int );
void ImpMatriz(int [][100],int );

int main ()
{
    int n, a[100][100],b[100][100],c[100][100];
    srand(time(NULL));

    puts("Ingresa el tamano de la matriz cuadrada:");
    scanf("%d",&n);
    puts("La matriz A es:");
    GenMatriz(a,n);
    ImpMatriz(a,n);
    puts("La matriz B es:");
    GenMatriz(b,n);
    ImpMatriz(b,n);
    puts("la suma de matrices A+B es:");
    SumaMatrices(c,a,b,n);
    ImpMatriz(c,n);

return 0;
}

void GenMatriz(int a[][100],int n)
{
    int i,j;
    for(j=0;j<n;j++){
       for(i=0;i<n;i++)
            a[i][j]=rand()%100;
    }
}

void SumaMatrices(int s[][100], int s1[][100], int s2[][100],int n)
{
    int i,j;
    for(j=0;j<n;j++)
       for(i=0;i<n;i++)
          s[j][i]=s1[j][i]+s2[j][i];
}

void ImpMatriz(int a[][100],int n)
{
    int i,j;
    for(j=0;j<n;j++){
       for(i=0;i<n;i++)
           printf("%d\t",a[j][i]);
       printf("\n");
    }
}