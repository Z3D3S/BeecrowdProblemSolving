#include <stdio.h>

int main() {
	int N,C;
	long long dinheiro = 0;
	char T;
	scanf("%d",&N);
	getchar();
	while((--N) >= 0){
		scanf("%c %d",&T,&C);
		getchar();
		if(T == 'G'){
			dinheiro = dinheiro - C;
		}
		else if(T == 'V'){
			dinheiro = dinheiro + C;
		}
	}
	if(dinheiro >= 0){
		printf("A greve vai parar.\n");
	}
	else{
		printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
	}
	

	return 0;
}