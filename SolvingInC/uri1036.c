#include <stdio.h>
#include <math.h>

int main() {
    double A,B,C,N,X1,X2;
    scanf("%lf %lf %lf\n",&A,&B,&C);
    N = (B*B) - (4*A*C);
    if(A == 0||N < 0){
        printf("Impossivel calcular\n");
    }
    else{
        X1 = (-B + sqrt(N))/(A+A);
        X2 = (-B - sqrt(N))/(A+A);
        printf("R1 = %.5lf\n",X1);
        printf("R2 = %.5lf\n",X2);
    }
    return 0;
}