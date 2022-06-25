#include <stdio.h>
int main(){
	int P,J1,J2,R,A,Sum;
	scanf("%d",&P);
	if(P == 1){
		scanf("%d",&J1);
		scanf("%d",&J2);
		Sum = J1+J2;
		scanf("%d",&R);
		scanf("%d",&A);
		if(R == 1&&A == 0){
			printf("Jogador 1 ganha!\n");
		}
		else if(R == 1&&A == 1){
			printf("Jogador 2 ganha!\n");
		}
		else if(Sum % 2 == 0){
			printf("Jogador 1 ganha!\n");	
		}
		else{
			printf("Jogador 2 ganha!\n");	
		}
	}
	else if(P == 0){
		scanf("%d",&J1);
		scanf("%d",&J2);
		Sum = J1+J2;
		scanf("%d",&R);
		scanf("%d",&A);
		if(R == 1&&A == 0){
			printf("Jogador 1 ganha!\n");
		}
		else if(R == 1&&A == 1){
			printf("Jogador 2 ganha!\n");
		}
		else if(Sum % 2 != 0){
			printf("Jogador 1 ganha!\n");	
		}
		else{
			printf("Jogador 2 ganha!\n");
		}
	}
	return 0;
}