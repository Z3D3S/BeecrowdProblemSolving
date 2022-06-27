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
			if(j == 0){
				printf("x = 35");
				for(i = 0; i < 31;++i){
					printf(" ");
				}
			}
			if(j == 2){
				for(i = 0; i < 15;++i){
					printf(" ");
				}
				printf("x = 35");
				for(i = 15; i < 31;++i){
					printf(" ");
				}
			}
			if(j == 4){
				for(i = 0; i < 31;++i){
					printf(" ");
				}
				printf("x = 35");
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