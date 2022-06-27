#include <stdio.h>

int main() {
	double hora,minuto;
	while(scanf("%lf %lf",&hora,&minuto) != EOF){
		hora = (hora*12)/360;
		minuto = (minuto*60)/360;
		if(hora <= 9){
			printf("0");
		}
		printf("%.0lf:",hora);
		if(minuto <= 9){
			printf("0");
		}
		printf("%0.lf\n",minuto);
	}
	return 0;
}