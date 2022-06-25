#include<stdio.h>

int main(){
	int Posicao,C = 0,X,Contador1,i,j,Numero_De_Sequencias = 0 ;
	char String1[1000000],String2[1000000];
	while(scanf("%[^\n]",String1) != EOF){
		++C;
		Contador1= 0;
		j = 0;
		Numero_De_Sequencias = 0;
		for(X =0;String1[X] != '\0';++X);
		while(getchar() != '\n');
		scanf("%[^\n]",String2);
		while(getchar() != '\n');
		for(i= 0;String2[i] != '\0';++i){
			if(String1[Contador1] != String2[j]){
				Contador1 = 0;
			}
			if(String1[Contador1] == String2[j]){
				++Contador1;
				if(Contador1 == X){
					Posicao = j-X;
					if(String2[j-1] == String2[j+1]){
						Posicao = j-X+1;
					}
					++Numero_De_Sequencias;
					String1[Contador1] = '\0';
					Contador1 = 0;
					if(Numero_De_Sequencias % X == 0&&String1[X-1] == String1[X-2]){
						++Numero_De_Sequencias;
					}
				}
			}
			++j;
		}
		printf("Caso #%d:\n",C);
		if(Numero_De_Sequencias != 0){
			printf("Qtd.Subsequencias: %d\n",Numero_De_Sequencias);
		}
		else{
			printf("Nao existe subsequencia\n");
		}
		if(Numero_De_Sequencias != 0){
			printf("Pos: %d\n",Posicao+2);
		}
		printf("\n");
	}
	return  0;
}