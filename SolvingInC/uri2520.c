#include <stdio.h>

int main() {
	int DistanciaY,DistanciaX,Matriz[110][110],N,M,posicaoXCapturador,posicaoYCapturador,posicaoXPokemon,posicaoYPokemon,i,j;
	while(scanf("%d %d",&N,&M) != EOF){
		for(i = 0; i < N;++i){
			for(j = 0;j < M;++j){
				scanf("%d",&Matriz[i][j]);
				if(Matriz[i][j] == 1){
					posicaoXCapturador = i;
					posicaoYCapturador = j;
				}
				if(Matriz[i][j] == 2){
					posicaoXPokemon = i;
					posicaoYPokemon = j;
				}
			}
		}
		DistanciaX = posicaoXCapturador - posicaoXPokemon;
		if(DistanciaX < 0){
			DistanciaX *= -1;
		}
		DistanciaY = posicaoYCapturador - posicaoYPokemon;
		if(DistanciaY < 0){
			DistanciaY *= -1;
		}
		printf("%d\n",DistanciaX+DistanciaY);
	}



	

	return 0;
}