#include <stdio.h>
 
int main() {
    
        int ID_1,QUANTIDADE_1;
        float VALOR_1;
        int ID_2,QUANTIDADE_2;
        float VALOR_2;
        float VALORAPAGAR;
        
    scanf("%d", &ID_1);
    scanf("%d", &QUANTIDADE_1);
    scanf("%f", &VALOR_1);
    scanf("%d", &ID_2);
    scanf("%d", &QUANTIDADE_2);
    scanf("%f", &VALOR_2);
    
    
        VALORAPAGAR = (QUANTIDADE_1*VALOR_1) + (QUANTIDADE_2*VALOR_2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", VALORAPAGAR);
    
    return 0;
}