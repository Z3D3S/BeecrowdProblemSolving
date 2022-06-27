#include <stdio.h>

int main() {
	int i,j;
	for(i = 0;i < 39;++i){
		printf("-");
	}
	printf("\n");
	for(j = 0;j < 4;++j){
		printf("|");
		if(j == 0){
			printf("  decimal  ");
		}
		else if(j == 1){
			printf("  octal  ");
		}
		else if(j == 2){
			printf("  Hexadecimal  ");
		}
	}
	printf("\n");
	for(i = 0;i < 39;++i){
		printf("-");
	}
	printf("\n");
	for(i = 0;i < 16;++i){
		for(j = 0;j < 4;++j){
			printf("|");
			if(j == 0){
				if(i <= 9){
				printf("      %d    ",i);
				}
				else{
					printf("     %d    ",i);
				}
			}
			else if(j == 1){
				if(i <= 7){
					printf("    %d    ",i);
				}
				else{
					printf("   %d    ",i+2);
				}
			}
			else if(j == 2){
				if(i <= 9){
					printf("       %d       ",i);
				}
				else{
					printf("       %c       ",i+55);
				}
			}
		}
		printf("\n");
	}
	for(i = 0;i < 39;++i){
		printf("-");
	}
	printf("\n");
	return 0;
}