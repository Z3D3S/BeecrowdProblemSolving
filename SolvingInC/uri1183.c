#include <stdio.h>
 
int main() {
	int i,j,k = 0,cont = 0;
	float M[12][12],SomatorioS = 0,SomatorioM = 0;
	char Operacao;
	scanf("%c",&Operacao);
	while(getchar() != '\n');
	for(i=0;i < 12;++i){
		for(j=0;j < 12 ;++j){
			scanf("%f",&M[i][j]);
		}
	}
	for(i = 0; i < 11;++i){
		if(Operacao == 'S'){
			for(j= (1+k);j < 12;++j){
				SomatorioS += M[i][j];
			}
			if(i == 10){
				printf("%.1f\n",SomatorioS);
			}
		}
		if(Operacao == 'M'){
			for(j = (1+k);j < 12;++j){
				SomatorioM += M[i][j];
				++cont;
			}
			if(i == 10){
				printf("%.1f\n",SomatorioM/cont);
			}
		}
		++k;
	}

    return 0;
}