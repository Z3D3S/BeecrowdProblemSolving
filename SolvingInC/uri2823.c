#include <stdio.h>

int main() {
	int processos;
	double custo,periodo, n;
	scanf("%d",&processos);
	while((--processos) >= 0){
		scanf("%lf %lf",&custo,&periodo);
		n += custo/periodo;
	}
	if(n > 1){
		printf("FAIL\n");
	}
	else {
		printf("OK\n");
	}


	return 0;
}