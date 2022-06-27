#include <stdio.h>
#include <math.h>

int main() {
	char matriz[10100][4],String1[10];
	int M,i,j,carro,cont,aux;
	while(1){
		scanf("%d",&M);
		if(M == 0){
			break;
		}
		for(i = 0;i < M;++i){
				cont = 0;
				scanf(" %[^\n]",String1);
				for(j = 0;String1[j] != '\0';++j){
					if(String1[j] == '0'||String1[j] == '1'){
						matriz[i][cont] = String1[j];
						++cont;
					}
				}
				matriz[i][cont] = '\0';
		}
		i = 0;
		j = 0;
		carro = 1;
		cont = 0;
		while((--M) >= 0){
			while(matriz[i][j] != '\0'){
				if(matriz[i][j] == '1'&&matriz[i][j+1] == '1'){
					aux = carro;
					carro = 2;
					cont = cont + fabs((aux-2));
					break;

				}
				else if(matriz[i][j] == '1'&&matriz[i][j+2] == '1'){
					aux = carro;
					carro = 1;
					cont = cont + fabs((aux-1));
					break;
				}
				else if(matriz[i][j+1] == '1'&&matriz[i][j+2] == '1'){
					aux = carro;
					carro = 0;
					cont = cont + fabs((aux-0));
					break;
				}
				else{
					j = j+3;
				}
			}
			j = 0;
			++i;
		}
		printf("%d\n",cont);
	}
	return 0;
}