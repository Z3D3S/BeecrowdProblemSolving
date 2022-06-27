#include <stdio.h>

int main() {
	int N;
	char Vilao[10000];
	scanf("%d",&N);
	while(getchar () != '\n');
	++N;
	while(--N){
		scanf("%[^\n]",Vilao);
		printf("Y\n");
	}
	

	return 0;
}