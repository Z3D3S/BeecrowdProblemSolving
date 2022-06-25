#include <stdio.h>
 
int main() {
	float A,Media = 0;
	int Parada = 0,Cont, f = 0,caqui;
	while(Parada != 2){
		Cont = 0;
		Media = 0;
		f = 0;
		while(Cont < 2){
			scanf("%f",&A);
			if(A <= 10 && A >= 0){
				Media += A;
				++Cont;
			}
			else{
				++f;
			}
		}
		caqui = f;
		for(f = 0;f < caqui;++f){
				printf("nota invalida\n");
		}
		printf("media = %.2f\n",Media/Cont);
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d",&Parada);
		while(Parada != 2&&Parada != 1){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&Parada);
		}
 	}
    return 0;
}