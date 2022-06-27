#include <stdio.h>

int main() {
	double Distancia,Diam1,Diam2;
	scanf("%lf %lf %lf",&Distancia,&Diam1,&Diam2);
	printf("%.2lf\n",Distancia/(Diam1+Diam2));
	return 0;
}