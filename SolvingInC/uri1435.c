#include <stdio.h>
 
int main() {
	int M[100][100],i,j,X,XP,k,cont;
	while(1){
		cont = 0,k = 1;
		scanf("%d",&X);
		if( X == 0){
			break;
		}
		if(X % 2 == 1){
			XP = (X+1)/2;
		}
		else if(X % 2 == 0){
			XP = X/2;
		}
		++XP;
		while(--XP){
			for(i = 0+cont;i < X-cont;++i){
				for(j = 0+cont;j < X-cont;++j){
					M[i][j] = k;
				}
			}
			++k;
			++cont;
		}
		for(i = 0;i < X;++i){
			for(j = 0;j < X;++j){
				printf("%3d",M[i][j]);
				if(j < X-1){
					printf(" ");
				}
				else{
					printf("\n");
				}
			}
		}
		printf("\n");
	}

    return 0;
}