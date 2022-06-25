#include <stdio.h>
 
int main() {
    int A,B,aux;
	scanf("%d %d",&A,&B);
	if(A < B){
		aux = A;
		A = B;
		B = aux;
	}
	if((A % B) == 0){
		printf("Sao Multiplos\n");
	}
	else{
		printf("Nao sao Multiplos\n");	
	}
 
    return 0;
}