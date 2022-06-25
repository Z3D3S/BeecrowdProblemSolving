#include<stdio.h>

int main(){
	int X,i,j,Coc,Contador = 1,k,Numero;
	while(scanf("%d",&X) != EOF){
		Coc = 0;
		Numero = 1;
		for(k = 0;k < X;++k){
			Numero += X-k;
		}
		printf("Caso %d: ",Contador);
		printf("%d numero",Numero);
		if(Numero > 1){
			printf("s");
		}
		printf("\n");
		for(i = 0; i <= X;++i){
			for(j = 0;j < 0+Coc||j == 0;++j){
				if(i != 0){
					printf(" ");
				}
				printf("%d",i);
			}
			++Coc;
		}
		printf("\n\n");
		++Contador;
	}
	return 0;
}