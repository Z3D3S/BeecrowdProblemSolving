#include<stdio.h>

int main(){
	int Horas,Minutos;
	while(scanf("%d:%d",&Horas,&Minutos)!=EOF){
		if(Horas == 7){
			printf("Atraso maximo: %d\n",Minutos);
		}
		else if(Horas == 8){
			printf("Atraso maximo: %d\n",(Minutos+60));
		}
		else if(Horas == 9){
			printf("Atraso maximo: 120\n");
		}
		else{
			printf("Atraso maximo: 0\n");
		}
	}
	return 0;
}