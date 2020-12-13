#include<math.h>
#include <stdio.h>

float dvdelante1(float h, float (xi));
float dvatras1(float h, float(xi));
float dvcentrada1(float h, float (xi));
float dvdelante2(float h, float (xi));
float dvatras2(float h, float(xi));
float dvcentrada2(float h, float (xi));
float dvdelante3(float h, float (xi));
float dvatras3(float h, float(xi));
float dvcentrada3(float h, float (xi));
float dvdelante4(float h, float (xi));
float dvatras4(float h, float(xi));
float dvcentrada4(float h, float (xi));
float error(float (xi), float h);

int main()
{
    int opcion;
    printf("Indique que aproximación de h desea calcular\n");
    printf("1.h=0.5\n2.h=0.2\n3.h=0.1\n4.h=0.01\n--> ");
    scanf("%d",&opcion);
    float xi,h,error;
    
    switch(opcion)
    {
        case 1:
        printf("f(xi) por adelante: %f ",dvdelante1(xi,h));
        error=fabs((0.2489-dvdelante1(xi,h))/0.2489)*100;
        printf("\nError relativo= %f ",error);
        printf("\nf(xi) por atras: %f ",dvatras1(xi,h));
        error=fabs((0.2489-dvatras1(xi,h))/0.2489)*100;
        printf("\nError relativo= %f ",error);
        printf("\nf(xi) centrada: %f ",dvcentrada1(xi,h));
        error=fabs((0.2489-dvcentrada1(xi,h))/0.2489)*100;
        printf("\nError relativo= %f ",error);
        break;
        case 2:
        printf("\nf(xi) por adelante: %f ",dvdelante2(xi,h));
        error=fabs((0.2489-dvdelante2(xi,h))/0.2489)*100;
        printf("\nError relativo= %f ",error);
        printf("\nf(xi) por atras: %f ",dvatras2(xi,h));
        error=fabs((0.2489-dvatras2(xi,h))/0.2489)*100;
        printf("\nError relativo= %f ",error);
        printf("\nf(xi) centrada:%f ",dvcentrada2(xi,h));
        error=fabs((0.2489-dvcentrada2(xi,h))/0.2489)*100;
        printf("\nError relativo= %f ",error);
        break;
        case 3:
        printf("\nf(xi) por adelante: %f ",dvdelante3(xi,h));
        error=fabs((0.2489-dvdelante3(xi,h))/0.2489)*100;
        printf("\nError relativo= %f ",error);
        printf("\nf(xi) por atras: %f ",dvatras3(xi,h));
        error=fabs((0.2489-dvatras3(xi,h))/0.2489)*100;
        printf("\nError relativo= %f ",error);
        printf("\nf(xi) centrada:%f ",dvcentrada3(xi,h));
        error=fabs((0.2489-dvcentrada3(xi,h))/0.2489)*100;
        printf("\nError relativo= %f ",error);
        break;
        case 4:
        printf("\nf(xi) por adelante %f ",dvdelante4(xi,h));
        error=fabs((0.2489-dvdelante4(xi,h))/0.2489)*100;
        printf("\nError relativo= %f ",error);
        printf("\nf(xi) por atras: %f ",dvatras4(xi,h));
        error=fabs((0.2489-dvatras4(xi,h))/0.2489)*100;
        printf("\nError relativo= %f ",error);
        printf("\nf(xi) centrada:%f ",dvcentrada4(xi,h));
        error=fabs((0.2489-dvcentrada4(xi,h))/0.2489)*100;
        printf("\nError relativo= %f ",error);
        break;
    }
}
float dvdelante1(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.5;
    fxi=1-exp(-xi/0.2);
    aprox1=1-exp(-(xi+h)/0.2);
    aprox2=1-exp(-(xi+(2*h))/0.2);
    deriv=(-aprox2+4*aprox1-3*fxi)/(2*h);
    return deriv;
    
}
float dvatras1(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.5;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi-h)/0.2);
    aprox2 = 1-exp(-(xi-(2*h))/0.2);
    deriv= (3*fxi-4*aprox1+aprox2)/(2*h);
    return deriv;
    
}
float dvcentrada1(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv, aprox3, aprox4;
    xi=0.6;
    h=0.5;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi+h)/0.2);
    aprox2 = 1-exp(-(xi+(2*h))/0.2);
    aprox3= 1-exp(-(xi-h)/0.2);
    aprox4 = 1-exp(-(xi-(2*h))/0.2);
    deriv = (-aprox2+8*aprox1-8*aprox3+aprox4)/(12*h);
    return deriv;
}
float dvdelante2(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.2;
    fxi=1-exp(-xi/0.2);
    aprox1=1-exp(-(xi+h)/0.2);
    aprox2=1-exp(-(xi+(2*h))/0.2);
    deriv=(-aprox2+4*aprox1-3*fxi)/(2*h);
    return deriv;
    
}
float dvatras2(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.2;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi-h)/0.2);
    aprox2 = 1-exp(-(xi-(2*h))/0.2);
    deriv= (3*fxi-4*aprox1+aprox2)/(2*h);
    return deriv;
    
}
float dvcentrada2(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv, aprox3, aprox4;
    xi=0.6;
    h=0.2;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi+h)/0.2);
    aprox2 = 1-exp(-(xi+(2*h))/0.2);
    aprox3= 1-exp(-(xi-h)/0.2);
    aprox4 = 1-exp(-(xi-(2*h))/0.2);
    deriv = (-aprox2+8*aprox1-8*aprox3+aprox4)/(12*h);
    return deriv;
}
float dvdelante3(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.1;
    fxi=1-exp(-xi/0.2);
    aprox1=1-exp(-(xi+h)/0.2);
    aprox2=1-exp(-(xi+(2*h))/0.2);
    deriv=(-aprox2+4*aprox1-3*fxi)/(2*h);
    return deriv;
    
}
float dvatras3(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.1;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi-h)/0.2);
    aprox2 = 1-exp(-(xi-(2*h))/0.2);
    deriv= (3*fxi-4*aprox1+aprox2)/(2*h);
    return deriv;
    
}
float dvcentrada3(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv, aprox3, aprox4;
    xi=0.6;
    h=0.1;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi+h)/0.2);
    aprox2 = 1-exp(-(xi+(2*h))/0.2);
    aprox3= 1-exp(-(xi-h)/0.2);
    aprox4 = 1-exp(-(xi-(2*h))/0.2);
    deriv = (-aprox2+8*aprox1-8*aprox3+aprox4)/(12*h);
    return deriv;
}
float dvdelante4(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.01;
    fxi=1-exp(-xi/0.2);
    aprox1=1-exp(-(xi+h)/0.2);
    aprox2=1-exp(-(xi+(2*h))/0.2);
    deriv=(-aprox2+4*aprox1-3*fxi)/(2*h);
    return deriv;
    
}
float dvatras4(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.01;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi-h)/0.2);
    aprox2 = 1-exp(-(xi-(2*h))/0.2);
    deriv= (3*fxi-4*aprox1+aprox2)/(2*h);
    return deriv;
    
}
float dvcentrada4(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv, aprox3, aprox4;
    xi=0.6;
    h=0.01;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi+h)/0.2);
    aprox2 = 1-exp(-(xi+(2*h))/0.2);
    aprox3= 1-exp(-(xi-h)/0.2);
    aprox4 = 1-exp(-(xi-(2*h))/0.2);
    deriv = (-aprox2+8*aprox1-8*aprox3+aprox4)/(12*h);
    return deriv;
}

