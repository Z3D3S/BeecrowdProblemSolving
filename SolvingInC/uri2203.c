#include <stdio.h>
#include<math.h>

int main() {
	double Xf,Xi,Yf,Yi,R1,R2,distanciaMaxima,DistanciaX,DistanciaY;
	double Distancia,Velocidade;
	while(scanf("%lf %lf %lf %lf %lf %lf %lf",&Xf,&Yf,&Xi,&Yi,&Velocidade,&R1,&R2)!= EOF){
		DistanciaX = Xi-Xf;
		DistanciaY = Yi-Yf;
		distanciaMaxima = R1+R2;
		Distancia =  sqrt(pow(DistanciaX,2)+pow(DistanciaY,2)); 
		if(Distancia+Velocidade*1.5 > distanciaMaxima){
			printf("N\n");
		}
		else{
			printf("Y\n");
		}
	}

	return 0;
}