#include <stdio.h>

int main() {
	int Vetor[3],N,number,i;
	char letra;
	scanf("%d",&N);
	getchar();
	scanf("%c",&letra);
	getchar();
	if(letra == 'A'){
		Vetor[0] = 1;
		Vetor[1] = 0;
		Vetor[2] = 0;
	}
	else if(letra == 'B'){
		Vetor[0] = 0;
		Vetor[1] = 1;
		Vetor[2] = 0;
	}
	else if(letra == 'C'){
		Vetor[0] = 0;
		Vetor[1] = 0;
		Vetor[2] = 1;
	}
	while((--N) >= 0){
		scanf("%d",&number);
		if(number == 1){
			if(Vetor[0] == 1){
				Vetor[0] = 0;
				Vetor[1] = 1;
			}
			else if(Vetor[1] == 1){
				Vetor[1] = 0;
				Vetor[0] = 1;
			}	
		}
		else if(number == 2){
			if(Vetor[1] == 1){
				Vetor[1] = 0;
				Vetor[2] = 1;
			}
			else if(Vetor[2] == 1){
				Vetor[2] = 0;
				Vetor[1] = 1;
			}
		}
		else if(number == 3){
			if(Vetor[2] == 1){
				Vetor[2] = 0;
				Vetor[0] = 1;
			}
			else if(Vetor[0] == 1){
				Vetor[0] = 0;
				Vetor[2] = 1;
			}
		}
	}
	for(i = 0;i < 3;++i){
		if(Vetor[i] == 1){
			break;
		}
	}
	if(i == 0){
		printf("A\n");
	}
	else if(i == 1){
		printf("B\n");
	}
	else{
		printf("C\n");
	}
	return 0;
}