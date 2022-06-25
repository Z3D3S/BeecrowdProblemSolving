#include <stdio.h>
 
int main() {

    double A1,A2,A3,A4,A5,X,B,C;
    const float pi = 3.14159;
        
    scanf("%lf %lf %lf", &X, &B, &C);
        A1 = (X*C)/2;
    printf("TRIANGULO: %.3lf\n", A1);
        A2 = pi*(C*C);
    printf("CIRCULO: %.3lf\n", A2);
        A3 = ((X+B)*C)/2;
    printf("TRAPEZIO: %.3lf\n", A3);
        A4 = (B*B);
    printf("QUADRADO: %.3lf\n", A4);
        A5 = (X*B);
    printf("RETANGULO: %.3lf\n", A5);
     
    return 0;
}