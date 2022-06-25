#include <stdio.h>

int main() {
	int i,j,N,V[1000][1000];
	scanf("%d",&N);
	for(i=0;i < N+1;++i){
		for(j = 0;j < N+1;++j){
			scanf("%d",&V[i][j]);
		}
	}
	for(i = 0;i< N;++i){
		for(j = 0;j< N;++j){
			if((V[i][j] == 1&&V[i][j+1] == 1)||(V[i+1][j] == 1&&V[i+1][j+1] == 1)||(V[i][j] == 1&&V[i+1][j]== 1)||(V[i][j+1] == 1&&V[i+1][j+1] == 1)||(V[i][j] == 1&&V[i+1][j+1] == 1)||(V[i+1][j] == 1&&V[i][j+1] == 1)){
				printf("S");
			}
			else{
				printf("U");
			}
		}
		printf("\n");
	}
	return 0;
}