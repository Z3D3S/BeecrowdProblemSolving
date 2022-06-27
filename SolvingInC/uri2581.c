#include <stdio.h>

int main() {
	int N,i;
	char String[100000];
	scanf("%d",&N);
	while(getchar() != '\n');
	for(i =0; i < N;++i){
		scanf("%[^\n]", String);
		while(getchar() != '\n');
	}
	++N;
	while(--N){
		printf("I am Toorg!\n");
	}

	

	return 0;
}