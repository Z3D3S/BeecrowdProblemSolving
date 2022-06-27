#include <stdio.h>

int main() {
	int N,i;
	double aux,Vetor[40],Tempo,Distancia;
	while(scanf("%d",&N) != EOF){
		aux = 0;
		for(i = 0; i < N;++i){
		scanf("%lf %lf",&Tempo,&Distancia);
		Vetor[i] = Distancia/Tempo;
		}
		for(i=0;i < N ;++i){
			if(Vetor[i] > aux){
				aux = Vetor[i];
				printf("%d\n",i+1);
			}
		}
	}
	return 0;
}