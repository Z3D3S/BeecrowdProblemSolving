#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}
int main() {
	int vetor[200000],X,maiorp,menorp,p;
	int N,i,j,k;
	while(1){
		scanf("%d",&N);
		if(N == 0){
			break;
		}
		N *= 2;
		for(i= 0;i < N;++i){
			scanf("%d",&X);
			vetor[i] = X;
		}
		qsort(vetor,N,sizeof(int),comparador);
		k = N;
		N /= 2;
		j = 0;
		maiorp =  100010000;
		menorp = -1;
		while(j < N){
			p = vetor[j]+vetor[k-j-1];
			if(menorp < p){
				menorp = p;
			}
			if(maiorp > p){
				maiorp = p;
			}
			++j;
		}
		printf("%d %d\n",menorp,maiorp);
	}

	return 0;
}