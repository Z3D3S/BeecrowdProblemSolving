#include <stdio.h>
 
int main() {
    
    int NUMERO,HORA;
    float SALARIOHORA,SALARIO;
        
    scanf("%d", &NUMERO);
    scanf("%d", &HORA);
    scanf("%f", &SALARIOHORA);
    
    SALARIO = (SALARIOHORA*HORA);
        
    printf("NUMBER = %d\n", NUMERO);
    printf("SALARY = U$ %.2f\n", SALARIO);
    
    return 0;
}