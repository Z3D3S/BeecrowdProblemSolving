#include <stdio.h>
 
int main() {
    
    char NOME[15];
        
    double SALARIOF,BONIFICACAO,TOTAL;
        
    scanf("%s", &NOME);
    scanf("%lf", &SALARIOF);
    scanf("%lf", &BONIFICACAO);
    
    TOTAL = SALARIOF + (0.15*BONIFICACAO);
    
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    
    return 0;
}