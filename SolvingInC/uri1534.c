#include <stdio.h>
 
int main() {
	int M[70][70],i,j,X;
	while(scanf("%d",&X) != EOF){
		for(i = 0;i < X;++i){
			for(j = 0;j < X;++j){
				M[i][j] = 3;
			}
		}
		for(i = 0,j=0;i < X&&j < X;++i,++j){
			M[i][j] = 1;

		}
		for(i = 0,j = X-1;i >= 0&&j >= 0;++i,--j){
			M[i][j] = 2;
		}
		for(i = 0;i < X;++i){
			for(j = 0;j < X;++j){
				printf("%d",M[i][j]);
			}
			printf("\n");
		}
	}

    return 0;
}