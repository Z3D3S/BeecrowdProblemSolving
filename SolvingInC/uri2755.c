#include <stdio.h>

int main() {
	int i;
	printf("\"Ro'b'er\tto\\/\"\n");
	for(i = 0; i < 5;++i){
		printf("(");
		if(i == 0||i == 4){
			printf("._.");
		}
		if(i == 1){
			printf(" l: ");
		}
		if(i == 2){
			printf(" .-. ");
		}
		if(i == 3){
			printf(" :l ");
		}
		printf(")");
		if(i <= 3){
			printf(" ");
		}
	}
	printf("\n");
	for(i = 0; i < 3;++i){
		printf("(");
		if(i == 0){
			printf("^_-");
		}
		if(i == 1){
			printf("-_-");
		}
		if(i == 2){
			printf("-_^");
		}
		printf(")");
		if(i <= 1){
			printf(" ");
		}
	}
	printf("\n");
	for(i = 0; i < 2;++i){
		printf("(");
		if(i == 0){
			printf("\"_\"");
		}
		if(i == 1){
			printf("'.'");
		}
		printf(")");
		if(i == 0){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}