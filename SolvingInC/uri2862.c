#include <stdio.h>

int main() {
	int N,X;
	scanf("%d",&N);
	while((--N) >= 0){
		scanf("%d",&X);
		if(X > 8000){
			printf("Mais de 8000!\n");
		}
		else{
			printf("Inseto!\n");
		}
	}
	return 0;
}