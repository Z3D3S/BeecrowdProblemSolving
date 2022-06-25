#include<stdio.h>

int main() {
    int X,M;
    M = 2002;
    
    scanf("%d",&X);
   
    while (M != X){
        scanf("%d",&X);
        printf("Senha Invalida\n");
        
    }
    if (M == X){
        printf("Acesso Permitido\n");
}
    return 0;
}
