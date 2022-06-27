#include <stdio.h>
typedef struct{
	char String[100];
	int Var_Controle;
}__attribute__((packed)) Buscas_t;
int main() {
	Buscas_t Vetor[10000];
	char String_de_comparacion[100];
	int N,i,j,Q,out,aux,k = 0;
	while(scanf("%d",&N) == 1){
		if(k != 0){
			printf("\n");
		}
		for(i = 0;i < N;++i){
			scanf("%s",Vetor[i].String);
		}
		scanf("%d",&Q);
		++Q;
		while(--Q){
			for(i = 0;i < N;++i){
				Vetor[i].Var_Controle = 0;
			}
			scanf("%s",String_de_comparacion);
			for(j = 0;String_de_comparacion[j] != '\0';++j){
				for(i = 0;i < N;++i){
					if(Vetor[i].Var_Controle == 0&&(String_de_comparacion[j] != Vetor[i].String[j])){
						Vetor[i].Var_Controle = 1;
					}
				}
			}
			out = 0;
			aux = 0;
			for(i = 0;i < N;++i){
				if(Vetor[i].Var_Controle == 0){
					++out;
					for(j = 0;Vetor[i].String[j] != '\0';++j);
						if(j >= aux){
							aux = j;
						}

				}
			}
			if(out != 0){
				printf("%d %d\n",out,aux);
			}
			else{
				printf("-1\n");
			}
		}
		++k;
	}
	return 0;
}