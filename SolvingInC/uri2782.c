#include <stdio.h>

int main() {
	int N,i,cont = 0,salto,aux;
	long int V[1100];
	scanf("%d",&N);
	for(i = 0;i < N;++i){
		scanf("%ld",&V[i]);
	}
	salto = 100000000;
	for(i = 0;i < N;++i){
		if(i < N-1||N == 1){
			aux = (V[i]-V[i+1]);
			if(salto != aux){
				salto = aux;
				++cont;
			}
		}
	}
	printf("%d\n",cont);
	return 0;
}