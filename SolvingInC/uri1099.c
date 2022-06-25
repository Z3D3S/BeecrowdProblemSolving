#include <stdio.h>
int main() {
	int Cozin,X,j,i,Y,aux,V[10000];
	scanf("%d",&Cozin);
	for(j = 0;j < Cozin;++j){
		V[j] = 0;
		scanf("%d %d",&X,&Y);
		if(X > Y){
			aux = X;
			X = Y;
			Y = aux;
		}
		if(X % 2 != 0){
			X = X+1;
		}
		if(Y % 2 != 0){
			Y = Y-1;
		}
		for(i = X;(i <= Y)&&(X != Y);++i){
			if(i % 2 != 0){
			V[j] += i;
			}
		}

	}
	for(j = 0;j < Cozin;++j){
		printf("%d\n",V[j]);
	}
    return 0;
}