#include <stdio.h>

int main() {
	int val,j,i,N,M,C,Dado,cont1 = 0,cont2 = 0,Vetor[110];
	scanf("%d %d %d",&N,&C,&M);
	for(i=0;i < C;++i){
		scanf("%d",&Dado);
		val = 0;
		for(j = 0;j < i;++j){
			if(Vetor[j] == Dado){
				val = 1;
				break;
			}
			else{
				val = 0;
			}
		}
		if(!val){
			Vetor[cont1] = Dado;
			++cont1;
		}
	}
	for(i = 0;i < M;++i){
		scanf("%d",&Dado);
		for(j = 0;j < cont1;++j){
			if(Vetor[j] == Dado){
				val = 1;
				break;
			}
			else{
				val = 0;
			}
		}
		if(val){
			Vetor[j] = 0;
			++cont2;
		}	
	}
	printf("%d\n",cont1-cont2);
	return 0;
}