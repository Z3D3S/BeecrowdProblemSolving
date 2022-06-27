#include <stdio.h>

int main() {
	int N,A,B,Soma;
	scanf("%d",&N);
	scanf("%d %d",&A,&B);
	Soma = A+B;
	if(Soma > N){
		printf("Deixa para amanha!\n");
	}
	else{
		printf("Farei hoje!\n");
	}
	

	return 0;
}