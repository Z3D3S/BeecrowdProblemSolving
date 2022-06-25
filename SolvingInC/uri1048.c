#include <stdio.h>
 
int main() {
	char i = '%';
	float salario,incremento_salario;
	scanf("%f",&salario);
	if(salario >= 0&&salario <= 400){
		incremento_salario = (salario*15)/100;
		salario = salario+incremento_salario;
		printf("Novo salario: %.2f\n",salario);
		printf("Reajuste ganho: %.2f\n",incremento_salario);
		printf("Em percentual: 15 %c\n",i);
	}
	else if(salario > 400&&salario <= 800){
		incremento_salario = (salario*12)/100;
		salario = salario+incremento_salario;
		printf("Novo salario: %.2f\n",salario);
		printf("Reajuste ganho: %.2f\n",incremento_salario);
		printf("Em percentual: 12 %c\n",i);
	}
	else if(salario > 800&&salario <= 1200){
		incremento_salario = (salario*10)/100;
		salario = salario+incremento_salario;
		printf("Novo salario: %.2f\n",salario);
		printf("Reajuste ganho: %.2f\n",incremento_salario);
		printf("Em percentual: 10 %c\n",i);
	}
	else if(salario > 1200&&salario <= 2000){
		incremento_salario = (salario*7)/100;
		salario = salario+incremento_salario;
		printf("Novo salario: %.2f\n",salario);
		printf("Reajuste ganho: %.2f\n",incremento_salario);
		printf("Em percentual: 7 %c\n",i);
	}
	else if(salario > 2000){
		incremento_salario = (salario*4)/100;
		salario = salario+incremento_salario;
		printf("Novo salario: %.2f\n",salario);
		printf("Reajuste ganho: %.2f\n",incremento_salario);
		printf("Em percentual: 4 %c\n",i);
	}
    return 0;
}