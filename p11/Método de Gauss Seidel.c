#include <stdio.h>
#include<math.h>
float A[3][3] = {{10,2,-1},{-3,-6,2},{1,1,5}};  
float b[3] = {27,-61.5,-21.5};  
float x_inicial_1,x_inicial_2,x_inicial_3;  
float x_iteracion_1,x_iteracion_2,x_iteracion_3; 
float error1, error2, error3;
int i,j;
int main()
{
printf("<-----------------METODO DE GAUSS SEIDEL----------------->\n"); 
for(j=0;j<5;j++){
    if(j==0){
        x_iteracion_1 = b[0]/A[0][0];
        x_iteracion_2 = ((-A[1][0]*x_iteracion_1)+b[1])/A[1][1];
        x_iteracion_3 = ((-A[2][0]*x_iteracion_1)-(A[2][1]*x_iteracion_2)+b[2])/A[2][2];
        printf("x1 i:[1] --> %.4f  \n",x_iteracion_1);
        printf("x2 i:[1] --> %.4f  \n",x_iteracion_2);
        printf("x3 i:[1] --> %.4f  \n",x_iteracion_3);
    }
       
    else {
        printf("\n");
        x_inicial_1 = x_iteracion_1;
        x_iteracion_1 = ((-A[0][1]*x_iteracion_2)-(A[0][2]*x_iteracion_3)+b[0])/A[0][0];
        error1=fabs((x_iteracion_1-x_inicial_1)/(x_iteracion_1))*100;
        x_inicial_2 = x_iteracion_2;
        x_iteracion_2 = ((-A[1][0]*x_iteracion_1)-(A[1][2]*x_iteracion_3)+b[1])/A[1][1];
        error2=fabs((x_iteracion_2-x_inicial_2)/(x_iteracion_2))*100;
        x_inicial_3=x_iteracion_3;
        x_iteracion_3 = ((-A[2][0]*x_iteracion_1)-(A[2][1]*x_iteracion_2)+b[2])/A[2][2];
        error3=fabs((x_iteracion_3-x_inicial_3)/(x_iteracion_3))*100;
        printf("x1 i:[%d] --> %.4f   Ea--> %.4f \n",j+1,x_iteracion_1,error1);
        printf("x2 i:[%d] --> %.4f   Ea--> %.4f \n",j+1,x_iteracion_2,error2);
        printf("x3 i:[%d] --> %.3f   Ea--> %.4f \n",j+1,x_iteracion_3,error3);
        }
    }
 
}
