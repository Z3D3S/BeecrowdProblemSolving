#include <stdio.h>

int main() {
	int i,j;
	for(i = 0;i < 39;++i){
		printf("-");
	}
	printf("\n");
	for(j = 0;j < 5;++j){
		printf("|");
		if(j == 1||j == 3){
			for(i = 0;i < 37;++i){
				printf(" ");
			}
		}
		else{
			for(i = 0;i < 8;++i){
				printf(" ");
			}
			if(j == 0){
				printf("Roberto");
			}
			if(j == 2){
				printf("5786   ");
			}
			if(j == 4){
				printf("UNIFEI ");
			}
			for(i = 15;i < 37;++i){
				printf(" ");
			}
		}
		printf("|\n");
	}
	for(i = 0;i < 39;++i){
		printf("-");
	}
	printf("\n");
	return 0;
}