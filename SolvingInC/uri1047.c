#include <stdio.h>
 
int main() {
	int A,AM,B,BM,Hora,Horam = 0,Hi,Hf,HoraH =0;
	scanf("%d %d %d %d",&A,&AM,&B,&BM);
	Hi = (A*60) + AM;
	Hf = (B*60) + BM;
	if(Hi < Hf){
		Hora = (Hf-Hi);
	}
	else{
		Hora = ((24*60 - A*60)-AM)+ Hf;
	}
	if(Hora > 24*60){
		Hora -= (24*60);
	}
	for(Hora = Hora;Hora > 0;--Hora){
		++Horam;
		if(Horam == 60){
			Horam = 0;
			++HoraH;
		}
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",HoraH,Horam);
 
    return 0;
}