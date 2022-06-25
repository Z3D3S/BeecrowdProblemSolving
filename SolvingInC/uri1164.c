#include <stdio.h>
 
int main() {
	int i,X,N,Soma;
	scanf("%d",&N);
	++N;
	while(--N){
		scanf("%d",&X);
		Soma = 0;
		for(i = 1;i < X;++i){
			if(X % i == 0){
				Soma += i;
			}
		}
		printf("%d ",X);
		if(Soma == X){
			printf("eh perfeito\n");
		}
		else{
			printf("nao eh perfeito\n");
		}
	}

    return 0;
}