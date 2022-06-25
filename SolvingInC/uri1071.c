#include <stdio.h>
int main() {
	int X,i,Y,aux,V = 0;
	scanf("%d",&X);
	scanf("%d",&Y);
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
		V += i;
		}
	}
	printf("%d\n",V);
    return 0;
}