#include <stdio.h>

int main() {
	int N,Q,n,Vetor[110],j,i,aux,p;
	while(scanf("%d %d",&N,&Q) != EOF){
		++N;
		++Q;
		i = 1;
		while(--N){
			scanf("%d",&n);
			Vetor[i] = n;
			++i; 
		}
		Vetor[i] = -1;
		for(i=1; Vetor[i] != -1 ;++i){
			for(j=1; Vetor[j] != -1;++j){
				if(Vetor[i] >= Vetor[j]){
					aux = Vetor[j];
					Vetor[j] = Vetor[i];
					Vetor[i] = aux;
				}
			}
		}
		while(--Q){
			scanf("%d",&p);
			printf("%d\n",Vetor[p]);
		}
	}
	return 0;
}