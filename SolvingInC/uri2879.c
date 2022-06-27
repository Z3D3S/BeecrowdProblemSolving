#include <stdio.h>

int main() {
	int N,X,cont = 0;
	scanf("%d",&N);
	while((--N) >= 0){
		scanf("%d",&X);
		if(X != 1){
			++cont;
		}
	}
	printf("%d\n",cont);
	

	return 0;
}