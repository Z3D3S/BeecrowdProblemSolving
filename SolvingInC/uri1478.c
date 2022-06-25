#include <stdio.h>
 
int main() {
	int contador,l,pop,M[100][100],i,j,X,XP,k,cont,gago;
	while(1){
		scanf("%d",&X);
		if( X == 0){
			break;
		}
		contador = 0;
		gago = 1,XP = X*2,pop = 0,k = X,cont = 1;
		while(--XP){
			for(l = 0,i=X-1-pop,j = 0;l <cont&&i >= 0&&j >= 0&&j < X&&i < X;++l,++i){
				M[i][j] = k;
				++j;
			}
			for (l = 0,i= 0+contador,j=X-1;l < cont&&j >= 0&&i>= 0&&j < X&&i < X;--j,--i,++l){
				M[i][j] = k;
			}
			if(k == 1){
				++k;
				gago = 0;
			}
			else if(gago == 0){
				++k;
			}
			else{
				--k;
			}
			++cont;
			++pop;
			++contador;
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