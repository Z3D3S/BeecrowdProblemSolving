#include <stdio.h>

int main() {
	int N,A,L,G;
	scanf("%d",&N);
	while((--N) >= 0){
		scanf("%d %d %d",&A,&L,&G);
		if(A >= 200&&A <= 300){
			if(L >= 50){
				if(G >= 150){
					printf("Sim\n");
				}
				else{
					printf("Nao\n");
				}
			}
			else{
				printf("Nao\n");
			}
		}
		else{
			printf("Nao\n");
		}
	}

	return 0;
}