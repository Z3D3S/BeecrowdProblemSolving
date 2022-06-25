#include<stdio.h>
int Quadrado(int N1){
    int Quadradin = N1*N1;
    return (Quadradin);
}
int main() {
    int i = 1,N,B,Quadradin;
    scanf("%d",&N);
    while( B != N){
        B = i + 1;
        if(B%2 == 0){
            Quadradin = Quadrado(B);
        printf("%d^2 = %d\n",B ,Quadradin);
        }
        i++;
    }
    return 0;
}