#include <stdio.h>

int main() {
	int i,j,N,M,boll,Matriz[110][110];
	while(scanf("%d %d",&N,&M) != EOF){
		for(i = 0;i < N;++i){
			for(j=0;j < M;++j){
				scanf("%d",&boll);
				if(boll){
					Matriz[i][j] = 9;
				}
				else{
					Matriz[i][j] = 0;
				}
			}
		}
		for(i=0;i < N;++i){
			for(j=0;j<M;++j){
				if(Matriz[i][j] == 0){
					if(Matriz[i-1][j] == 9){
						++Matriz[i][j];
					}
					if(Matriz[i+1][j] == 9){
						++Matriz[i][j];
					}
					if(Matriz[i][j-1] == 9){
						++Matriz[i][j];
					}
					if(Matriz[i][j+1] == 9){
						++Matriz[i][j];
					}
				}
			}
		}
		for(i = 0;i<N;++i){
			for(j=0;j< M;++j){
				printf("%d",Matriz[i][j]);
				Matriz[i][j] = '\0';
			}
			printf("\n");
		}
	}

	return 0;
}