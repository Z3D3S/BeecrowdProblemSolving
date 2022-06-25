#include <stdio.h>

int main() {

    int M;
    scanf("%d",&M);
    
    printf("%d\n", M);
    printf("%d nota(s) de R$ 100,00\n",M/100);
    M -= (M/100)*100;
    printf("%d nota(s) de R$ 50,00\n",M/50);
    M -= (M/50)*50;
    printf("%d nota(s) de R$ 20,00\n",M/20);
    M -= (M/20)*20;
    printf("%d nota(s) de R$ 10,00\n",M/10);
    M -= (M/10)*10;
    printf("%d nota(s) de R$ 5,00\n", M/5);
    M -= (M/5)*5;
    printf("%d nota(s) de R$ 2,00\n", M/2);
    M -= (M/2)*2;
    printf("%d nota(s) de R$ 1,00\n", M);
    return 0;
}
