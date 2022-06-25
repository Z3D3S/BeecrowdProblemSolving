#include <stdio.h>
 
int main() {
	int N,X,i,j;
	scanf("%d",&N);
	++N;
	while(--N){
		scanf("%d",&X);
		for(i = 1,j = 0;i <= X;++i){
			if(X % i == 0){
				++j;
			}
		}
		printf("%d ",X);
		if(j == 2){
			printf("eh primo\n");
		}
		else{
			printf("nao eh primo\n");
		}
	}
    return 0;
}