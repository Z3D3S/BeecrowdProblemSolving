#include <stdio.h>

int main() {
	double M;
	int segundos,hora,minuto;
	while(scanf("%lf",&M) != EOF){
		segundos = 0;
		minuto = 0;
		hora = 0;
		if(M >= 360){
			M = M - 360;
		}
		segundos = ((6*60*60)+((M*360*60)/90));
		while(segundos >= 3600){
			segundos = segundos - 3600;
			++hora;
			if(hora == 24){
				hora = 0;
			}
		}
		while(segundos >= 60){
			segundos = segundos - 60;
			++minuto;
		}
		if( M >= 0 && M < 90){
			printf("Bom Dia!!\n");
		}
		else if(M >= 90 && M < 180){
			printf("Boa Tarde!!\n");
		}
		else if(M >= 180 && M < 270){
			printf("Boa Noite!!\n");
		}
		else{
			printf("De Madrugada!!\n");
		}
		printf("%.2d:%.2d:%.2d\n",hora,minuto,segundos);
	}
	return 0;
}