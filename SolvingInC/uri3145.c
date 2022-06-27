#include <stdio.h>

int main() {
	double pessoas = 2,convidados,distancia,viagem;
	scanf("%lf %lf",&convidados,&distancia);
	pessoas += convidados;
	viagem = distancia/pessoas;
	printf("%.2lf\n",viagem);

	return 0;
}