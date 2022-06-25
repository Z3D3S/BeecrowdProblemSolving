#include<stdio.h>

typedef struct {
	unsigned long long int Matricula;
	double Nota;
}__attribute__((packed)) aluno_t;

int main(){
	aluno_t Escolhidos[100];
	int X,i;
	double aux = 0;
	unsigned long long int MatriculaEscolhida;
	scanf("%d",&X);
	for(i = 0;i < X;++i){
		scanf("%llu",&Escolhidos[i].Matricula);
		scanf("%lf",&Escolhidos[i].Nota);
	}
	for(i = 0;i < X;++i){
		if(Escolhidos[i].Nota >= aux){
			aux = Escolhidos[i].Nota;
		}
	}
	for(i = 0;i < X;++i){
		if(Escolhidos[i].Nota == aux){
			MatriculaEscolhida = Escolhidos[i].Matricula;
		}
	}
	if(aux >= 8){
		printf("%llu\n",MatriculaEscolhida);
	}
	else{
		printf("Minimum note not reached\n");
	}
	

	return 0;
}