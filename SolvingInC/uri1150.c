#include <stdio.h>
 
int main() {
	int g,i,X,N,Sum;
	scanf("%d",&X);
	scanf("%d",&N);
	while(N <= X){
		scanf("%d",&N);
	}
	Sum = X;
	for(i = 0,g = 1;Sum < N;++i,++g){
		Sum += X+i;
	}
	printf("%d\n",g);
    return 0;
}