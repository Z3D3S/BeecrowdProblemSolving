#include <stdio.h>

int main(){
	double A,B;
	char Simbol = '%';
	double Porcentagem;
	scanf("%lf %lf",&A,&B);
	Porcentagem = ((B-A)/A)*100;
	printf("%.2lf%c\n",Porcentagem,Simbol); 
	return 0;
}