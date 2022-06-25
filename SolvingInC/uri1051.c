#include <stdio.h>
 
int main() {
	float Salario,Imposto;
	scanf("%f",&Salario);
	if(Salario <= 2000&&Salario >= 0){
		printf("Isento\n");
	}
	else if(Salario <= 3000&&Salario > 2000){
		Salario -= 2000;
		Imposto = (Salario*8)/100;
		printf("R$ %.2f\n",Imposto);
	}
	else if(Salario <= 4500&&Salario > 3000){
		Salario -= 3000;
		Imposto = ((1000*8)/100)+((Salario*18)/100);
		printf("R$ %.2f\n",Imposto);

	}
	else if(Salario > 4500){
		Salario -=4500;
		Imposto = ((1000*8)/100)+((1500*18)/100)+((Salario*28)/100);
		printf("R$ %.2f\n",Imposto);
	}
 
    return 0;
}