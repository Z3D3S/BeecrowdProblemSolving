#include <stdio.h>

int main() {
	int caso1 = 0,caso2 = 0,caso3 = 0,A[3],i;
	for(i = 0;i < 3;++i){
		scanf("%d",&A[i]);
	}
	caso1 = (2*A[1]+4*A[2]);
	caso2 = (2*A[0]+2*A[2]);
	caso3 = (4*A[0]+2*A[1]);
	if((caso1 <= caso2)&&(caso1 <= caso3)){
		printf("%d\n", caso1);
	}
	else if((caso2 <= caso1)&&(caso2 <= caso3)){
		printf("%d\n", caso2);
	}
	else{
		printf("%d\n", caso3);
	}
	return 0;
}