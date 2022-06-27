#include <stdio.h>
void printandoA(int i){
	for(i = 0;i < 7;++i){
		printf(" ");
	}
	printf("A\n");
}
void printandoB(int i){
	for(i = 0;i < 6;++i){
		printf(" ");
	}
	for(i = 0 ;i  < 3;++i){
		if(i == 0||i == 2){
			printf("B");
		}
		else{
			printf(" ");
		}
	}
	printf("\n");
}
void printandoC(int i){
	for(i = 0;i < 5;++i){
		printf(" ");
	}
	for(i = 0 ;i  < 5;++i){
		if(i == 0||i == 4){
			printf("C");
		}
		else{
			printf(" ");
		}
	}
	printf("\n");
}
void printandoD(int i){
	for(i = 0;i < 4;++i){
		printf(" ");
	}
	for(i = 0 ;i  < 7;++i){
		if(i == 0||i == 6){
			printf("D");
		}
		else{
			printf(" ");
		}
	}
	printf("\n");
}
void printandoE(int i){
	for(i = 0;i < 3;++i){
		printf(" ");
	}
	for(i = 0 ;i  < 9;++i){
		if(i == 0||i == 8){
			printf("E");
		}
		else{
			printf(" ");
		}
	}
	printf("\n");
}
int main() {
	int i;
	printandoA(i);
	printandoB(i);
	printandoC(i);
	printandoD(i);
	printandoE(i);
	printandoD(i);
	printandoC(i);
	printandoB(i);
	printandoA(i);
	return 0;
}