#include <stdio.h>

int main(){
	int X,i;
	char M[2000][100];
	scanf("%d",&X);
	++X;
	while(--X){
		scanf("%s",M[i]);
		while(getchar() != '\n');
		++i;
	}
	printf("Ciencia da Computacao\n");

	return 0;
}