#include <stdio.h>
 
int main() {
	int i,j,L;
	float M[12][12],SomatorioS = 0,SomatorioM = 0;
	char Operacao;
	scanf("%d",&L);
	while(getchar() != '\n');
	scanf("%c",&Operacao);
	while(getchar() != '\n');
	for(i=0;i < 12;++i){
		for(j=0;j < 12 ;++j){
			scanf("%f",&M[i][j]);
		}
	}
	for(i = 0; i < 12;++i){
		if(Operacao == 'S'){
			for(j = L;j < (L+1);++j){
				SomatorioS += M[i][j];
			}
			if(i == 11){
				printf("%.1f\n",SomatorioS);
			}
		}
		if(Operacao == 'M'){
			for(j = L;j < (L+1);++j){
				SomatorioM += M[i][j];
			}
			if(i == 11){
				printf("%.1f\n",SomatorioM/(i+1));
			}
		}
	}

    return 0;
}