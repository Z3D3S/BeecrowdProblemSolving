#include<stdio.h>

int main(){
	int N;
	char String1[100],String2[100];
	scanf("%d",&N);
	while(getchar() != '\n');
	++N;
	while(--N){
			scanf("%s",String1);
			scanf("%s",String2);
			while(getchar() != '\n');
		if((String1[0] == 'a'&&String2[1] == 'e')||(String2[0] == 'a'&&String1[1] == 'e')){
			if(String1[0] == 'a'&&String2[1] == 'e'){
				printf("Jogador 1 venceu\n");
			}
			else{
				printf("Jogador 2 venceu\n");
			}
		}
		else if((String1[1] == 'e'&&String2[4] == 'l')||(String2[1] == 'e'&&String1[4] == 'l')){
			if(String1[1] == 'e'&&String2[4] == 'l'){
				printf("Jogador 1 venceu\n");
			}
			else{
				printf("Jogador 2 venceu\n");
			}
		}
		else if((String1[4] == 'l'&&String2[0] == 'a')||(String2[4] == 'l'&&String1[0] == 'a')){
			if(String1[0] == 'a'&&String2[4] == 'l'){
				printf("Jogador 1 venceu\n");
			}
			else{
				printf("Jogador 2 venceu\n");
			}
		}	
		else if(String1[4] == 'l'&&String2[4] == 'l'){
			printf("Ambos venceram\n");
		}
		else if(String1[1] == 'e'&&String2[1] == 'e'){
			printf("Sem ganhador\n");

		}
		else if(String1[0] == 'a'&&String2[0] == 'a'){
			printf("Aniquilacao mutua\n");
		}
	}
	return 0;
}