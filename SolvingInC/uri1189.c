#include <stdio.h>
 
int main() {
	int i,j,cont = 0,g = 0;
	double M[12][12],SomatorioS = 0.0,SomatorioM = 0.0;
	char Operacao;
	scanf("%c",&Operacao);
	while(getchar() != '\n');
	for(i=0;i < 12;++i){
		for(j=0;j < 12 ;++j){
			scanf("%lf",&M[i][j]);
		}
	}
	for(i = 1; i < 11;++i){
		if(i < 6){
			++g;
		}
		if(i >6){
			--g;
		}
		if(Operacao == 'S'){
			for(j= 0 ;j < g;++j){
				SomatorioS += M[i][j];
			}
		}
		if(Operacao == 'M'){
			for(j = 0 ;j < g;++j){
				SomatorioM += M[i][j];
				++cont;
			}
		}

	}
	if(Operacao == 'S'){
		printf("%.1lf\n",SomatorioS);
	}
	if(Operacao == 'M'){
		SomatorioM /= cont;
		printf("%.1lf\n",SomatorioM);
	}

    return 0;
}