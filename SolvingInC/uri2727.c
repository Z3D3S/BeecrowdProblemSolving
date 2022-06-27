#include <stdio.h>

int main() {
	int N,i,k,pontos,espacos;
	char String[10000];	
	while(scanf("%d",&N) != EOF){
		for(i = 0; i < N;++i){
			espacos = 0;
			pontos = 0;
			scanf(" %[^\n]",String);
			for(k = 0;String[k] != '\0';++k){
				if(String[k] == '.'){
					++pontos;
					
				}
				else if(String[k] == ' '){
					++espacos;
				}
			}
			if(pontos == 1&&espacos == 0){
				printf("a\n");
			}
			else if(pontos == 2&&espacos == 0){
				printf("b\n");
			}
			else if(pontos == 3&&espacos == 0){
				printf("c\n");
			}
			else if(pontos == 2&&espacos == 1){
				printf("d\n");
			}
			else if(pontos == 4&&espacos == 1){
				printf("e\n");
			}
			else if(pontos == 6&&espacos == 1){
				printf("f\n");
			}
			else if(pontos == 3&&espacos == 2){
				printf("g\n");
			}
			else if(pontos == 6&&espacos == 2){
				printf("h\n");
			}
			else if(pontos == 9&&espacos == 2){
				printf("i\n");
			}
			else if(pontos == 4&&espacos == 3){
				printf("j\n");
			}
			else if(pontos == 8&&espacos == 3){
				printf("k\n");
			}
			else if(pontos == 12&&espacos == 3){
				printf("l\n");
			}
			else if(pontos == 5&&espacos == 4){
				printf("m\n");
			}
			else if(pontos == 10&&espacos == 4){
				printf("n\n");
			}
			else if(pontos == 15&&espacos == 4){
				printf("o\n");
			}
			else if(pontos == 6&&espacos == 5){
				printf("p\n");
			}
			else if(pontos == 12&&espacos == 5){
				printf("q\n");
			}
			else if(pontos == 18&&espacos == 5){
				printf("r\n");
			}
			else if(pontos == 7&&espacos == 6){
				printf("s\n");
			}
			else if(pontos == 14&&espacos == 6){
				printf("t\n");
			}
			else if(pontos == 21&&espacos == 6){
				printf("u\n");
			}
			else if(pontos == 8&&espacos == 7){
				printf("v\n");
			}
			else if(pontos == 16&&espacos == 7){
				printf("w\n");
			}
			else if(pontos ==24&&espacos == 7){
				printf("x\n");
			}
			else if(pontos == 9&&espacos == 8){
				printf("y\n");
			}
			else if(pontos == 18&&espacos == 8){
				printf("z\n");
			}	
		}
	}
	return 0;
}