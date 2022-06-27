#include <stdio.h>
int main() {
	int TempoTotal,Cont,i,N,Caixas[1100],TempoCaixas[1100],aux;
	while(scanf("%d",&N) != EOF){
		for(i = 1;i <= N;++i){
			scanf("%d",&Caixas[i]);
		}
		for(i = 1;i <= N;++i){
			scanf("%d",&TempoCaixas[i]);
		}
		TempoTotal = 0;
		Cont = 0;
		while(Cont < N){
			Cont = 0;
			for(i = 1;i <= N;++i){
				if(i == Caixas[i]){
					++Cont;
				}
				else{
					if((Caixas[i] > Caixas[i+1])&&i < N){
						TempoTotal = TempoTotal+TempoCaixas[i]+TempoCaixas[i+1];
						aux = Caixas[i];
						Caixas[i] = Caixas[i+1];
						Caixas[i+1] = aux;
						aux = TempoCaixas[i];
						TempoCaixas[i] = TempoCaixas[i+1];
						TempoCaixas[i+1] = aux;
					}
				}
			}
		}
		printf("%d\n",TempoTotal);
	}
	return 0;
}