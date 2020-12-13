#include <stdio.h>
#include <math.h>
int i;
int metodo;
int iteracion;
float valoractual, vanalitico, a,b;
float funcion1(float num),funcion2(float num), error_relativo(float valoractual,float vanalitico);
float medio(float a, float b), falsa1(float a, float b), falsa2(float a, float b);

float error_relativo(float valoractual, float vanalitico){
    float error;
    error= fabs((vanalitico-valoractual)/vanalitico)*100;
    return error;
}
float funcion1(float num){
    float fx;
    fx= (2*(num)*cos(2*num))-pow((num+1),2);
    return fx;
}
float funcion2(float num){
    float fx;
    fx= log(fabs(num))+pow(num,2)-4;
    return fx;
}
float falsa1(float a, float b){
    float xi;
    xi=b-((funcion1(b)*(a-b))/(funcion1(a)-funcion1(b)));
    return xi;
}
float falsa2(float a, float b){
    float xi;
    xi= b-((funcion2(b)*(a-b))/(funcion2(a)-funcion2(b)));
    return xi;
}
float medio (float a, float b){
    float xi;
    xi=((a+b)/2);
    return xi;
}

 int main(){
 printf("Indicar el metodo que desea resolver\n ");
 printf("1.Falsa posición           2.Bisección\n");
 scanf("%d",&metodo);
    switch(metodo){
        case 1:
        printf("Indicar las iteraciones a ejecutar ---> ");
        scanf("%d",&iteracion);
        printf("\n");
        a=-3;
        b=-2;
        vanalitico=0;
        valoractual=0;
        printf("                                                  FUNCION TRIGONOMETRICA                          \n");
        printf("   _____________________________________________________________________________________________________________\n");
        printf("   _i_______________xi_______________a________________b_____________Error_____________f(a)_________________f(b)_\n");
        for(i=1; i<=iteracion; i++){
            printf("    [%d]        [%f]      [%f]      [%f]     [%f]       [%f]         [%f]\n",i,falsa1(a,b),a,b,error_relativo(valoractual,vanalitico),funcion1(a),funcion1(b));
            if((funcion1(a)*funcion1(falsa1(a,b)))<0){
                b=falsa1(a,b);
                valoractual=b;
                vanalitico=falsa1(a,valoractual);
            }
            else{
                a=falsa1(a,b);
                valoractual=a;
                vanalitico=falsa1(valoractual,b);
                
                
            }
        }
        printf("\n");
        printf("                                                    FUNCION LOGARITMICA                        \n  ");
        printf(" ____________________________________________________________________________________________________________");
        printf("\n");
        a=1;
        b=2;
        vanalitico=0;
        valoractual=0;
        printf("   _i___________xi_______________a______________b_________________E_______________f(a)___________f(b)_________\n\n");
        for(i=1; i<=iteracion; i++){
        printf("    [%d]      [%f]     [%f]      [%f]          [%f]          [%f]      [%f]\n",i,falsa2(a,b),a,b,error_relativo(valoractual,vanalitico),funcion2(a),funcion2(b));
        if((funcion2(a)*funcion2(falsa2(a,b)))<0){
            b=falsa2(a,b);
            valoractual=b;
            vanalitico=falsa2(a,valoractual);
        }
        else{
            a=falsa2(a,b);
            valoractual=a;
            vanalitico=falsa2(valoractual,b);
            
        }
        }
        printf("   ___________________________________________________________________________________________________________");
        break;
        case 2:
        printf("Indicar las iteraciones a ejecutar ---> ");
        scanf("%d",&iteracion);
        printf("\n");
        printf("\n");
        a=-3;
        b=-2;
        vanalitico=0;
        valoractual=0;
        printf("                          FUNCION TRIGONOMETRICA                              \n ");
        printf("______________________________________________________________________________\n");
        printf("_i_____________xi_____________ a_______________b_____________Error_____________\n");
        for(i=1; i<=iteracion; i++){
            printf("[%d]       [%f]      [%f]     [%f]      [%f]    \n",i,medio(a,b),a,b,error_relativo(valoractual,vanalitico));
            if((funcion1(a)*funcion1(medio(a,b)))<0){
                b=medio(a,b);
                valoractual=b;
                vanalitico=medio(a,valoractual);
            }
            else{
                a=medio(a,b);
                valoractual=a;
                vanalitico=medio(valoractual,b);
            }
        }
        printf("\n");
        printf("                         FUNCION LOGARITMICA                     \n");
        printf("_____________________________________________________________________________\n");
        a=1;
        b=2;
        vanalitico=0;
        valoractual=0;
        printf("i_____________xi_______________a______________b______________Error___________\n");
        for(i=1; i<=iteracion; i++){
            printf("[%d]       [%f]      [%f]     [%f]        [%f]  \n",i,medio(a,b),a,b,error_relativo(valoractual,vanalitico));
            if((funcion2(a)*funcion2(medio(a,b)))<0){
                b=medio(a,b);
                valoractual=b;
                vanalitico=medio(a,valoractual);
            }
            else{
                a=medio(a,b);
                valoractual=a;
                vanalitico=medio(valoractual,b);
            }
        }
        printf("_____________________________________________________________________________");
        break;
    }
 }
 

