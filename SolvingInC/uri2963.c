#include <stdio.h>

int main() {
	int Carlin,N,X,menor = -1;
	scanf("%d",&N);
	scanf("%d",&Carlin);
	while(--N){
		scanf("%d",&X);
		if(menor < X){
			menor = X;
			if(menor > Carlin){
				break;
			}
		}
	}
	if(Carlin >= menor){
		printf("S\n");
	}
	else{
		printf("N\n");
	}
	return 0;
}