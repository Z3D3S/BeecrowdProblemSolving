#include <stdio.h>

int main(){
    double X;
    scanf("%lf",&X);
    if(0 <= X&&X <= 25){
        printf("Intervalo [0,25]\n");
    }
    if(25 < X&&X <= 50){
        printf("Intervalo (25,50]\n");
    }
    if( 50 < X&&X <= 75){
        printf("Intervalo (50,75]\n");
    }
    if(75 < X&&X <= 100){
        printf("Intervalo (75,100]\n");
    }
    if (0 > X||X > 100){
        printf("Fora de intervalo\n");
    }
}
