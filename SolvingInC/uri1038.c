#include<stdio.h>

int main(){
    int X,Y;
    double A;
    scanf("%d %d",&X,&Y);
    if(X == 1){
    A = Y*4.00;
    printf("Total: R$ %.2lf\n", A);
    }
    if(X == 2){
    A = Y*4.50;
    printf("Total: R$ %.2lf\n", A);
    }
    if(X == 3){
    A = Y*5.00;
    printf("Total: R$ %.2lf\n", A);
    }
    if(X == 4){
    A = Y*2.00;
    printf("Total: R$ %.2lf\n", A);
    }
    if(X == 5){
     A= Y*1.50;
    printf("Total: R$ %.2lf\n", A);
    }
    return 0;
}