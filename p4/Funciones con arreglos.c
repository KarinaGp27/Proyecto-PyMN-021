#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int infomatriz(int arre[][100], int b, int c);
int suma_v1(int *arreglo, int a);
int matriz(int arre[][100], int b, int c);
int n_aleatorio (int *arreglo, int a);
int impresion_arr (int *arreglo, int a);
int suma_vecs (int *arreglo, int a);
int arre[100][100],arra[100][100],arrb[100][100];
int problema,j,i,a,b,c,f1,c1,f2,c2;
int suma=0;
int arreglo1[100], arreglo2[100], arreglo3 [100], arreglo4[100];
int arregloss (int *arreglo, int a);
int impresion (int *arreglo, int a);
int matriz_col(int arre[][100], int b, int columnas);
int datoa(int arre[][100], int f1, int c1);
int datob(int arra[][100], int f2, int c2);
int mat(int arrb[][100], int f1, int c1);
int main()
{
    printf ("Seleccionar el problema que desea resolver: \n");
    scanf("%d",&problema);
    switch (problema){
        case 1:
        printf("Indicar el tamaño de arreglos\n");
        scanf("%d",&a);
        printf("Ingresar elementos del arreglo 1 (%d): \n",a);
        arregloss (arreglo1,a);
        printf("Ingresar los elementos del arreglo 2 (%d): \n",a);
        arregloss (arreglo2,a);
        printf("arreglo 1: \n");
        impresion (arreglo1,a);
        printf("arreglo 2: \n");
        impresion (arreglo2,a);
        break;
        case 2:
        printf("Favor de indicar el tamaño de los arreglos\n");
        scanf("%d",&a);
        printf("Vector 1: \n");
        impresion_arr(arreglo1,a);
        printf("Vector 2: \n");
        impresion_arr(arreglo2,a);
        break;
        case 3:
        printf("Favor de indicar el tamaño de arreglos\n");
        scanf("%d",&a);
        printf("Favor de ingresar los elementos del arreglo 1 (%d): \n",a);
        arregloss (arreglo1,a);
        printf("Favor de ingresar los elementos del arreglo 2 (%d): \n",a);
        arregloss (arreglo2,a);
        printf("La suma de los elementos vectoriales ingresados es: \n");
        suma_vecs (arreglo3,a);
        break;
        case 4:
        printf("Indicar el tamaño del arreglo\n");
        scanf("%d",&a);
        printf("Ingrese los elementos del arreglo 1 (%d): \n",a);
        arregloss (arreglo1,a);
        printf("La suma del arreglo es  ");
        suma_v1 (arreglo4,a);
        printf("\n");
        break;
        case 5:
        printf ("Ingrese el numero de filas\n");
        scanf("%d",&b);
        printf ("Ingrese el numero de columnas\n");
        scanf("%d",&c);
        for (int i=1; i<=b; i++)
        for(int j=1;j<=c; j++){
        printf("Digite un numero ");
        scanf("%d",&arre[i][j]);
        }
        printf("\n");
        printf ("Matriz final\n");
        matriz(arre,b,c);
        printf("\n");
        break;
        case 6:
        printf("Indique numero de filas\n");
        scanf("%d",&b);
        printf ("Indique numero de columnas\n");
        scanf("%d",&c);
        matriz_col(arre,b,c);
        printf("\n");
        break;
        case 7:
        printf("Favor de indicar el tamaño de los arreglos\n");
        scanf("%d",&a);
        printf("Vector 1: \n");
        impresion_arr(arreglo1,a);
        printf("Vector 2: \n");
        impresion_arr(arreglo2,a);
        suma_vecs (arreglo3,a);
        break;
        case 8:
        printf("Indique el numero de filas de la matriz 1\n");
        scanf("%d",&f1);
        printf("Ingrese el numero de columnas de la matriz 1\n");
        scanf("%d",&c1);
        printf("Ingrese el numero de filas de la matriz 2\n");
        scanf("%d",&f2);
        printf("Ingrese el numero de columnas de la matriz 2\n");
        scanf("%d",&c2);
        if (f1==c2){
            printf ("M1 \n");
            datoa(arre,f1,c1);
            printf("M2 \n");
            datob(arra,f2,c2);
            printf("El resultado de la multiplicacion es \n");
            mat(arrb,f1,c1);
            printf(" \n");
        }else{
            printf("Hay un error en los datos ingresados\n");
        }
        break;
    }
        
    return 0;
}
int arregloss (int*arreglo,int a){
    for(j=1;j<=a;j++){
        printf("elemento= %d =>",j);
        scanf("%d",&arreglo[j]);
        
    }
    printf("\n");
}
int impresion (int*arreglo,int a){
    for(j=1;j<=a;j++){
        printf("n: [%d]=> %d\n",j,arreglo [j]);
        
}
}
int n_aleatorio(int *arreglo, int a){
    int j;
    for(j=1; j<=a; j++){
        arreglo[j]=rand()%101;
    }
}
int impresion_arr(int *arreglo, int a){
    int j;
    for(j=1; j<=a; j++){
        n_aleatorio(arreglo,a);
        printf("posicion [%d]:==> %d\n",j,arreglo[j]);
    }
}
int suma_vecs (int*arreglo,int a){
    for(j=1; j<=a; j++){
        arreglo[j]=arreglo1[j]+arreglo2[j];
    }
    for(j=1; j<=a; j++){
        printf("El resultado de la suma es n[%d]:==> %d\n",j,arreglo[j]);
    }
}
int suma_v1(int*arreglo,int a){
    for(i=1; i<=a ;i++){
        suma=suma+arreglo1[i];
    }
    printf("%d",suma);
}
int infomatriz(int arre[][100], int b, int c){
    for (i=1; i<=b; i++)
    for (j=1; j<=c; j++){
        printf("orden [%d][%d] => ",i,j);
        scanf("%d",&arre[i][j]);
    }
}
int matriz(int arre[][100],int f, int c){
    for (i=1; i<=f; i++){
        printf("\n");
        for (j=1; j<=c; j++)
        printf(" [%d]",arre[i][j]);
        printf("\n");
    }
}
int matriz_col(int arre[][100], int b, int c){
    for (i=1; i<=b; i++){
        printf("\n");
        for(j=1; j<=c; j++){
            arre[i][j]=1+rand()%100;
            printf(" %d",arre[i][j]);
        }
    }
}
int datoa(int arre[][100], int f1, int c1){
for (i=1; i<=f1; i++)
for(j=1; j<=c1; j++){
    printf("orden [%d][%d] => ",i,j);
    scanf("%d",&arre[i][j]);
}
}
int datob(int arre[][100], int f2, int c2){
for (i=1; i<=f2; i++)
for(j=1; j<=c2; j++){
    printf("orden [%d][%d] => ",i,j);
    scanf("%d",&arra[i][j]);
}
}
int mat(int arrb[][100], int f1, int c1){
    int i,j, acumulador,contador;
    for(i=1; i<=f1; i++)
    for(j=1; j<=c1; j++){
        for(acumulador=0, contador=0; contador<=c1; contador++)
        acumulador=acumulador+arre[i][contador]*arra[contador][j];
        arrb[i][j]=acumulador;
    }
    for(i=1; i<=f1; i++){
        printf(" \n");
        for(j=1; j<=f2; j++)
        printf(" %d",arrb[i][j]);
    }
}















