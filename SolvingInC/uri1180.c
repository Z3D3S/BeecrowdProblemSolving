#include <stdio.h>
 
int main() {
	int X[1000],aux = 1000000000,V,aux1,i,N;
	scanf("%d",&N);
	for(i = 0;i < N;++i){
		scanf("%d",&V);
		X[i] = V;
	}
	for(i = 0;i < N;++i){
		if(X[i] < aux){
			aux = X[i];
			aux1 = i;
		}
	}
	printf("Menor valor: %d\n",aux);
	printf("Posicao: %d\n",aux1);

    return 0;
}