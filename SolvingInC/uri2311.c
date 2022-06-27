#include <stdio.h>

int main() {
	int X,i = 0,j,aux;
	char Nome[101][1000];
	double Dificuldade,Total_Pontos,Notas[7],coc1,Total_Nota[101],coc2;
	scanf("%d",&X);
	while(getchar() != '\n');
	++X;
	while(--X){
		Total_Pontos = 0;
		coc1 = -1;
		coc2 = 11;
		scanf("%s", Nome[i]);
		scanf("%lf",&Dificuldade);
		while(getchar() != '\n');
		for(j = 0; j < 7;++j){
			scanf("%lf",&Notas[j]);

			Total_Pontos += Notas[j];
		}
		for(j = 0;j < 7;++j){
			if(Notas[j] >= coc1){
				coc1 = Notas[j];
			}
		}
		Total_Pontos -= coc1;
		for(j = 0;j < 7;++j){
			if(Notas[j] <= coc2){
				coc2 = Notas[j];
			}
		}
		Total_Pontos -= coc2;
		Total_Pontos *= Dificuldade;
		Total_Nota[i] = Total_Pontos;
		++i;
	}
	aux = i;
	for(i = 0; i < aux;++i){
		printf("%s %.2lf\n",Nome[i],Total_Nota[i]);
	}

	return 0;
}