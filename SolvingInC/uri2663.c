#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b) {
   return ( *(int*)b - *(int*)a );
}
 

int main() {
	int cont = 1,N,K,i,j,Vetor[1010];
		scanf("%d",&N);
		scanf("%d",&K);
	for(i = 0; i < N;++i){
		scanf("%d",&Vetor[i]);
	}
    qsort(Vetor,N, sizeof(int),comparador);
    for(j=0; j < K-1; j++){
        ++cont;
    }
    for(j = j,i = j+1;(Vetor[j] == Vetor[i])&&i < N;++i){
    	++cont;
    }
    printf("%d\n", cont);
	return 0;
}