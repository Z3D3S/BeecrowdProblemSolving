#include <stdio.h>

int main(){
	unsigned int Lado,Quantidade_De_Lado;
	unsigned int Perimetro;
	scanf("%u %u",&Lado,&Quantidade_De_Lado);
	Perimetro = Lado*Quantidade_De_Lado;
	printf("%u\n",Perimetro);
	return 0;
}