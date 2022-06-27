#include <stdio.h>

int main() {
	int X1,Y1,X2,Y2,i;
	long M;
	while(scanf("%d %d %ld",&X1,&Y1,&M) != EOF){
		for(i = 0;i < M;++i){
			scanf("%d %d",&X2,&Y2);
			if(((X2 <= X1&& X2 > 0)&&(Y2 <= Y1&&Y2 > 0))||((X2 <= Y1&& X2 > 0)&&(Y2 <= X1&&Y2 > 0))){
				printf("Sim\n");
			}
			else{
				printf("Nao\n");
			}
		}
	}
	return 0;
}