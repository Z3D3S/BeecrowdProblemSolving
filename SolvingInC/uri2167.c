#include <stdio.h>

int main() {
	int choki =1,i,j = 0,Testes,Velocidade,aux = -1;
	scanf("%d",&Testes);
	for(i = 0;i < Testes;++i){
		scanf("%d",&Velocidade);
		++j;
		if(aux > Velocidade){
			choki = 0;
			break;
		}
		aux= Velocidade;
	}
	if(choki == 0)
		printf("%d\n",j);
	else{
		printf("0\n");
	}

	return 0;
}