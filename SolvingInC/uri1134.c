#include <stdio.h>
 
int main() {
	int A = 0,B = 0,C = 0,D = 0;
	while(A != 4){
		scanf("%d",&A);
		while(A >4&&A < 1){
			scanf("%d",&A);
		}
		if(A == 1){
			++B;
		}
		else if(A == 2){
			++C;
		}
		else if(A == 3){
			++D;
		}
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",B);
	printf("Gasolina: %d\n",C);
	printf("Diesel: %d\n",D);
    return 0;
}