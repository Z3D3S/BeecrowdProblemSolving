#include<stdio.h>

int main(){
	double X,Y,Area,Altura;
	while(scanf("%lf %lf",&X,&Y) != EOF){
		Area = (((Y/2)*(Y/2))*314)/100;
		Altura = (X/Area);
		printf("ALTURA = %.2lf\n",Altura);
		printf("AREA = %.2lf\n",Area);
	}	
	return 0;
}