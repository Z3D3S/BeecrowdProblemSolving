#include <stdio.h>

int main() {
	long long int V,Soma,j;
	int i;
	Soma = 0;
	for(i = 1; i < 10;++i){
		scanf("%lld",&V);
		Soma = Soma + V;
	}
	for(j = 1,i = 1; j < Soma;++j){
		++i;
		if(i == 10){
			i = 1;
		}
	}
	if(i == 1){
		printf("Dasher\n");
	}
	else if(i == 2){
		printf("Dancer\n");
	}
	else if(i == 3){
		printf("Prancer\n");
	}
	else if(i == 4){
		printf("Vixen\n");
	}
	else if(i == 5){
		printf("Comet\n");
	}
	else if (i == 6){
		printf("Cupid\n");
	}
	else if (i == 7){
		printf("Donner\n");
	}
	else if (i == 8){
		printf("Blitzen\n");
	}
	else{
		printf("Rudolph\n");
	}
	return 0;
}