#include <stdio.h> 
#include <math.h> 
float errorAbsoluto(float x1,float x0) 
{     
float erroraprox;          
erroraprox= (x1-x0)/x1;          
if (erroraprox<0)       erroraprox=-erroraprox;            
return erroraprox*100; 
}  
 float derivada_f1(float x) 
{     
return -8*sin(x)*exp(-x)+8*cos(x)*exp(-x); }  
float funcion2(float x) 
{   
return 2*x*x*x -11*x*x+17.7*x-5; 
}  
float derivada_f2(float x) 
{     
return 6*x*x-22*x+17.7; 
}  
float funcion1(float x) 
{      
return 8*sin(x)*exp(-x)-1; 
} 
void Metodo_NRaphson() 
{     
float x0,x1;     
int i=0,imax;     
float erroraprox=100;     
float error;          
printf("Favor de indicar el valor de x0--> ");     
scanf("%f",&x0);    //0     
printf("Favor de indicar el valor del error--> ");     
scanf("%f",&error);   //0.001     
printf("Favor de indicar el valor de las iteraciones--> ");     
scanf("%d",&imax);      //10               
printf(" i       xi          Error Aproximado\n");  
printf("____________________________________\n");
printf(" %d     %f \n",i,x0);          
while  ((erroraprox>error)&&(i<imax))     
{         
x1=x0-funcion2(x0)/derivada_f2(x0);   //metodo de newtonRaphson                  
erroraprox=errorAbsoluto(x1,x0);         
i=i+1;         
printf(" %d       %f      %f \n",i,x1,erroraprox);               x0=x1;             
 }         
  }  
void Metodo_Secante() 
{     
float x0,x1,x2;     
float error,erroraprox=100;     
int imax,i=0;     
float df;          
printf("\n");
printf("Favor de indicar el valor de x0-->  ");     
scanf("%f",&x0);      
printf("Favor de indicar el valor de x1-->  ");     
scanf("%f",&x1);      
printf("Favor de indicar el valor del error--> ");    
scanf("%f",&error);      
printf("Ingrese el maximo de iteraciones: ");     
scanf("%d",&imax); 
printf("\n");
printf("i    xi      xi+1       f'(xi)     erroraprox\n"); 
printf("______________________________________________\n");
printf("%d %f  %f   \n",0,x0,x1);               
while ((erroraprox>error)&&(i<imax))      
{          
df= (funcion2(x0)-funcion2(x1))/(x0-x1);                   
x2=x1-funcion2(x1)*(x0-x1)/(funcion2(x0)-funcion2(x1));   //metodo secante                 
erroraprox=errorAbsoluto(x2,x1);         
i=i+1;       
printf("%d %f  %f   %f  %f \n",i,x1,x2,df,erroraprox);                  x0=x1;         
x1=x2;      
}      
}  
int main() 
{    
Metodo_NRaphson(); 
Metodo_Secante();      
return 0; 
}
