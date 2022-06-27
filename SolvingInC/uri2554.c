#include <stdio.h>

int main() {
	int aux,N,D,Boll,aux1,aux2,aux3,Cont,DataPossivelano,k,Datadia,DataMes,DataAno,DataPossiveldia,DataPossiveldiames;
	while(scanf("%d %d",&N,&D) != EOF){
		while(getchar() != '\n');
		++D;
		k = 0;
		aux1 = 31;
		aux2 = 13;
		aux3 = 100000;
		while(--D){
			scanf("%d/%d/%d ",&Datadia,&DataMes,&DataAno);
			Cont = 0;
			aux = N+1;
			while(--aux){
				scanf("%d",&Boll);
				if(Boll == 1){
					++Cont;
				}
			}
			if(Cont == N){
				k = 1;
				if(Datadia <= aux1&&DataMes <= aux2&&DataAno <= aux3){
					aux1 = Datadia;
					DataPossiveldia = Datadia;
					aux2 = DataMes;
					DataPossiveldiames = DataMes;
					aux3 = DataAno;
					DataPossivelano = DataAno;
				}
				
			}
		}
		if(k == 1){
			printf("%d/%d/%d\n",DataPossiveldia,DataPossiveldiames,DataPossivelano);
		}
		else{
			printf("Pizza antes de FdI\n");
		}
	}
	

	return 0;
}