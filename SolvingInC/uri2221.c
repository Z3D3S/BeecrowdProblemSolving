#include <stdio.h>

int main() {
	int Instancias,B,ValorDeGolpe1,ValorDeGolpe2,A1,A2,D1,D2,L1,L2;
	scanf("%d",&Instancias);
	++Instancias;
	while(--Instancias){
		scanf("%d",&B);
		scanf("%d %d %d",&A1,&D1,&L1);
		scanf("%d %d %d",&A2,&D2,&L2);
		if(L1 % 2 == 0){
			ValorDeGolpe1 = (A1+D1)/2+B;
		}
		else{
			ValorDeGolpe1 = (A1+D1)/2;
		}
		if(L2 % 2 == 0){
			ValorDeGolpe2 = (A2+D2)/2+B;
		}
		else{
			ValorDeGolpe2 = (A2+D2)/2;
		}
		if(ValorDeGolpe1 > ValorDeGolpe2){
			printf("Dabriel\n");
		}
		else if(ValorDeGolpe1 == ValorDeGolpe2){
			printf("Empate\n");
		}
		else{
			printf("Guarte\n");
		}
	}
	

	return 0;
}