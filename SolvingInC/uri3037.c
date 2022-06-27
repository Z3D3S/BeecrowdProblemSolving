#include <stdio.h>

int main() {
	int N,i,J,M,ponto,distancia;
	scanf("%d",&N);
	while((--N) >= 0){
		i = 6;
		J = 0;
		M = 0;
		while((--i) >= 0){
			scanf("%d %d",&ponto,&distancia);
			if(i  >= 3){
				J += ponto*distancia;
			}
			else{
				M += ponto*distancia;
			}
		}
		if(J >= M){
			printf("JOAO\n");
		}
		else{
			printf("MARIA\n");
		}
	}
	

	return 0;
}