#include <stdio.h>
#include<math.h>

int main() {
	int About,i,j,CentroX,CentroY,Raio,Dano,Nivel,T,Largura,Haltura,Xinicial,Yinicial,PontoafastadoX,PontoafastadoY;
	double Resultado,Menor_Distancia;
	char Stringzin[10];
	scanf("%d",&T);
	++T;
	while(--T){
		Dano = 0;
		scanf("%d %d %d %d",&Largura,&Haltura,&Xinicial,&Yinicial);
		while(getchar() != '\n');
		scanf("%s %d %d %d",Stringzin,&Nivel,&CentroX,&CentroY);
		if(Stringzin[0] == 'f'){
			if(Nivel == 1){
				Raio = 20;
			}
			else if(Nivel == 2){
				Raio = 30;
			}
			else if(Nivel == 3){
				Raio = 50;
			}
			Dano = 200;
		}
		else if(Stringzin[0] == 'w'){
			if(Nivel == 1){
				Raio = 10;
			}
			else if(Nivel == 2){
				Raio = 25;
			}
			else if(Nivel == 3){
				Raio = 40;
			}
			Dano = 300;
		}
		else if(Stringzin[0] == 'e'){
			if(Nivel == 1){
				Raio = 25;
			}
			else if(Nivel == 2){
				Raio = 55;
			}
			else if(Nivel == 3){
				Raio = 70;
			}
			Dano = 400;
		}
		else if(Stringzin[0] == 'a'){
			if(Nivel == 1){
				Raio = 18;
			}
			else if(Nivel == 2){
				Raio = 38;
			}
			else if(Nivel == 3){
				Raio = 60;
			}
			Dano = 100;
		}
		if((CentroX >= Xinicial)&&(CentroX <= Xinicial+Largura)&&(CentroY >= Yinicial)&&(CentroY <= Yinicial+Haltura)){
			About = 1;
		}
		else{
			Menor_Distancia = Raio+1;
			for(i = 0;i <= Largura;++i){
				PontoafastadoX = Xinicial+i;
				PontoafastadoY = Yinicial;
				Resultado = ((CentroX-PontoafastadoX)*(CentroX-PontoafastadoX)+(CentroY-PontoafastadoY)*(CentroY-PontoafastadoY));
				if(Menor_Distancia > Raio){
					Menor_Distancia = sqrt(Resultado);
				}
			}
			for(j = 0,i=Largura;j <= Haltura;++j){
				PontoafastadoY = Yinicial+j;
				PontoafastadoX = Xinicial+i;
				Resultado = ((CentroX-PontoafastadoX)*(CentroX-PontoafastadoX)+(CentroY-PontoafastadoY)*(CentroY-PontoafastadoY));
				if(Menor_Distancia > Raio){
					Menor_Distancia = sqrt(Resultado);
				}
			}
			for(i = Largura,j = Haltura;i >= 0;--i){
				PontoafastadoX = Xinicial+i;
				PontoafastadoY = Yinicial+j;
				Resultado = ((CentroX-PontoafastadoX)*(CentroX-PontoafastadoX)+(CentroY-PontoafastadoY)*(CentroY-PontoafastadoY));
				if(Menor_Distancia > Raio){
					Menor_Distancia = sqrt(Resultado);
				}
			}
			for(j = Haltura,i=0;j >= 0;--j){
				PontoafastadoY = Yinicial+j;
				PontoafastadoX = Xinicial+i;
				Resultado = ((CentroX-PontoafastadoX)*(CentroX-PontoafastadoX)+(CentroY-PontoafastadoY)*(CentroY-PontoafastadoY));
				if(Menor_Distancia > Raio){
					Menor_Distancia = sqrt(Resultado);
				}
			}
			if(Menor_Distancia > Raio){
				About = 0;
			}
			else{
				About = 1;
			}
		}
		if(About == 1){
			printf("%d\n",Dano);
		}
		else{
			printf("0\n");
		}

	}
	return 0;
}