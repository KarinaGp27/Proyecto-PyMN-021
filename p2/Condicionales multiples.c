#include <conio.h>
#include <stdio.h>
int main(){
    int opc;
    float importe;
    float descuento;
    float total;
    int bolsas;
    int n;
    printf("Indique en cual departamento desea comprar: \n 1-Perfumeria \n 2-Salchichoneria \n 3-Carniceria \n 4-Limpieza \n");
    scanf("%d",&opc);
    switch (opc){
        case 1: printf ("Indique el importe del articulo: \n");
        scanf("%f",&importe);
        descuento=(importe*.20);
        printf("Indique numero de bolsas\n");
        scanf("%d",&bolsas);
        n=(bolsas*.10);
        total=(importe-descuento + n);
        printf("El total a pagar es: %f \n",total);
        break;
        case 2:printf ("Indique el importe del articulo: \n");
        scanf("%f",&importe);
        descuento=(importe*.40);
        printf("Indique numero de bolsas\n");
        scanf("%d",&bolsas);
        n=(bolsas*.10);
        total=(importe-descuento +n);
        printf("El total a pagar es: %f \n",total);
        break;
        case 3: printf ("Indique el importe del articulo: \n");
        scanf("%f",&importe);
        descuento=(importe*.20);
        printf("Indique numero de bolsas\n");
        scanf("%d",&bolsas);
        n=(bolsas*.10);
        total=(importe-descuento +n);
        printf("El total a pagar es: %f \n",total);
        break;
        case 4: printf ("Indique el importe del articulo: \n");
        scanf("%f",&importe);
        descuento=(importe*.35);
        printf("Indique numero de bolsas\n");
        scanf("%d",&bolsas);
        n=(bolsas*.10);
        total=(importe-descuento +n);
        printf("El total a pagar es: %f \n",total);
        break;
        
    }
    return 0;
}
    

 