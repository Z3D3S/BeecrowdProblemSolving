#include <stdio.h>
float difabsZ(int* Numero1,int* Numero2){
	int aux;
	aux = (*Numero1-*Numero2);
	if(aux < 0){
		aux *= -1;
	}
	return aux;
}
int main() {
int A,B,C,cont1=0,cont2=0;
scanf("%d %d %d",&A,&B,&C);
	if(difabsZ(&B,&C) < A&&A < (B + C)){
		++cont1;
	}
	if(difabsZ(&A,&C)< B&&B < (A + C)){
		++cont1;
	}
	if(difabsZ(&B,&A)< C&&C < (A + B)){
		++cont1;
	} 
	if(cont1 == 3){
		printf("Valido-");
		if(A != B&& A != C&&B != C){
			printf("Escaleno");
		}
		else if(A == B&&A == C&& B == C){
			printf("Equilatero");
		}
		else{
			printf("Isoceles");
		}
		printf("\n");
		if((A % 3 == 0||A % 4 == 0||A % 5 == 0)&&A != B&&A != C&&B != C){
			++cont2;
		}
		if((B % 3 == 0||B % 4 == 0||B % 5 == 0)&&A != B&&A != C&&B != C){
			++cont2;
		}
		if((C % 3 == 0||C % 4 == 0||C % 5 == 0)&&A != B&&A != C&&B != C){
			++cont2;
		}
		printf("Retangulo: ");
		if(cont2 == 3){
			printf("S\n");
		}
		else{
			printf("N\n");
		}
	}
	else{
		printf("Invalido\n");
	}
 
    return 0;
}