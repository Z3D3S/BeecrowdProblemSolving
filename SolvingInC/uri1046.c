#include <stdio.h>
 
int main() {
	int A,B,Hora;
	scanf("%d %d",&A,&B);
	if(A < B){
		Hora = (B - A);
	}
	else{
		Hora = ((24 - A) + B);
	}
	printf("O JOGO DUROU %d HORA(S)\n",Hora);
 
    return 0;
}