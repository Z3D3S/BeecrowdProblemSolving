#include <stdio.h>

int main() {
	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);
	if(A == B){
		printf("S\n");
	}
	else if(A == C){
		printf("S\n");
	}
	else if(B == C){
		printf("S\n");
	}
	else if(A == B+C){
		printf("S\n");
	}
	else if(B == A+C){
		printf("S\n");
	}
	else if(C ==A+B){
		printf("S\n");
	}
	else{
		printf("N\n");
	}

	return 0;
}