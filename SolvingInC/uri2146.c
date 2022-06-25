#include <stdio.h>

int main (){
    int Numero;
    while(scanf("%d",&Numero) != EOF){
        printf("%d\n",Numero-1);
    }
    return 0;
}