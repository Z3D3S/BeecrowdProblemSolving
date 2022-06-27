#include <stdio.h>

int main() {
	long int M;
	int boll;
	double Divisor,Numerador,Comparador = (2.0/3.0);
		while(scanf("%ld",&M) != EOF){
		Numerador = 0;
		Divisor = M;
		++M;
		while(--M){
			scanf("%d",&boll);
			if(boll == 1){
				++Numerador;
			}
		}
		if((Numerador/Divisor) >= Comparador){
			printf("impeachment\n");
		}
		else{
			printf("acusacao arquivada\n");
		}
	}

	return 0;
}