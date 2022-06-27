#include <stdio.h>
#include <stdlib.h>

int numero_primo(int Soma){
	int i,j;
		for(i = 1,j = 0;i <= Soma;++i){
			if(Soma % i == 0){
				++j;
			}
		}
		if(j == 2){
			return 1;
		}
		else{
			return 0;
		}
}
int main() {
	int M,V[50],Salto,i,Soma;
	while(scanf("%d",&M) != EOF){
		for(i = 0; i < M;++i){
			scanf("%d",&V[i]);
		}
		Soma = 0;
		scanf("%d",&Salto);
		for(i = M-1; i >= 0; i = i-Salto){
			Soma = Soma + V[i];
		}
		if(numero_primo(Soma)){
			printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
		}
		else{
			printf("Bad boy! I’ll hit you.\n");
		}
	}
	
	

	return 0;
}