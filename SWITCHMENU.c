#include<stdio.h>

void MTrian (int );
void Cuadrado (int );
void Linea (int );



int main (){
    char menu;

    printf("MENU:\n1. Triangulo\n2. Cuadrado\n3. Linea\n4. Salir\nIndica lo que quieres imprimir en la pantalla ingresando el numero:\n");
    scanf("%c", &menu);

    switch (menu){
        case '1':
            printf("Triangulo:\n");
            MTrian(6);
            break;

        case '2':
            printf("Cuadrado:\n");
            Cuadrado(5); break;
            break;

        case'3':
            printf("Linea:\n");
            Linea(10);
            break;

        case '4':
            break;

}

return 0;
}

void MTrian (int n){
    int m=(n+1)/2;
    char a[m][n];

    for (int i = 0; i < m; i++){
        int l = m-i-1;
        for (int j = 0; j < m+i; j++){
            if(j<l){
                a[i][j]= ' ';
            }else{
                a[i][j]= '*';
            }

        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m+i; j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }

}


void Cuadrado (int n){
     int i, j;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1 || i==n || j==1 || j==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }

}


void Linea (int n){
    int i;
    for(i=0; i<n; i++)
        putchar('*');
    i++;
}

