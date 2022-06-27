#include <stdio.h>

int main() {
	int Diaentregue,Dialimite;
	scanf("%d %d",&Diaentregue,&Dialimite);
	if(Diaentregue > Dialimite){
		printf("Eu odeio a professora!\n");
	}
	else{
		if(Diaentregue+3 <= Dialimite){
			printf("Muito bem! Apresenta antes do Natal!\n");
		}
		else{
			printf("Parece o trabalho do meu filho!\n");
			if(Diaentregue+2 >= 24){
				printf("Fail! Entao eh nataaaaal!\n");
			}
			else{
				printf("TCC Apresentado!\n");
			}
		}
	}

	return 0;
}