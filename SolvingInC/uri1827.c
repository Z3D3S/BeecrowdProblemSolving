#include <stdio.h>
 
int main() {
	int n,M[102][102],i,j;
	while(scanf("%d",&n) != EOF){
		for(i = 0;i < n;++i){
			for(j = 0;j < n;++j){
				M[i][j] = 0;
			}
		}
		for(i = 0,j = 0;i <n&&j < n;++i,++j){
			M[i][j] = 2;
		}
		for(i= 0,j = n-1;i <n&&j >= 0;++i,--j){
			M[i][j] = 3;
		}
		for(i = n/3;i <n-(n/3);++i){
			for(j = n/3;j < n-(n/3);++j){
				M[i][j] = 1;
			}
		}
		M[(n/2)][n/2] = 4;
		for(i = 0;i < n;++i){
			for(j = 0;j < n;++j){
				printf("%d",M[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
    return 0;
}