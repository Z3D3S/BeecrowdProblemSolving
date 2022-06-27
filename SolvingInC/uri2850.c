#include <stdio.h>
#include <string.h>

int main() {
	char String[10];
	while(scanf("%s",String) != EOF){
		if(strcmp(String,"esquerda") == 0){
			printf("ingles\n");
		}
		else if(strcmp(String,"direita") == 0){
			printf("frances\n");
		}
		else if(strcmp(String,"nenhuma") == 0){
			printf("portugues\n");
		}
		else if(strcmp(String,"as") == 0){
			printf("caiu\n");
		}
	}
	return 0;
}