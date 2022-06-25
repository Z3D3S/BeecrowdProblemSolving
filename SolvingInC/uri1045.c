#include <stdio.h>

 void troca_S(float* a ,float* b ,float* n){
 	int aux;
 	while(1){
 		if(*a < *b){
 			aux = *a;
 			*a = *b;
 			*b = aux;

 		}
 		if( *b < *n){
 			aux = *b;
 			*b = *n;
 			*n = aux;
 		}
 		if(*a >= *b&&*a >= *n){
 			break;
 		}
 	}
 }
 
int main() {
 	float A,B,C;
 	scanf("%f %f %f",&A,&B,&C);
 	troca_S(&A,&B,&C);
 	if(A >= (B+C)){
 		printf("NAO FORMA TRIANGULO\n");
 	}
 	if((A*A) == (B*B) + (C*C)){
 		printf("TRIANGULO RETANGULO\n");
 	}
 	if(((A*A) > (B*B) + (C*C))&&A <B+C){
 		printf("TRIANGULO OBTUSANGULO\n");
 	}
 	if((A*A) < (B*B) + (C*C)){
 		printf("TRIANGULO ACUTANGULO\n");
 	}
 	if(A == B&&A == C){
 		printf("TRIANGULO EQUILATERO\n");
 	}
 	if((C == B&&C != A)||(A == B&&A != C)){
 		printf("TRIANGULO ISOSCELES\n");
 	}


    return 0;
}