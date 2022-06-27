#include <stdio.h>

int main(){
	char Stringzin[10];
	int i = 1,T,Escala1,Escala2,Escala3,EscalaTotal;
	scanf("%d",&T);
	++T;
	while(--T){
		while(getchar() != '\n');
		scanf("%s",Stringzin);
		scanf("%d %d %d",&Escala1,&Escala2,&Escala3);
		if(Stringzin[1] == 'i'){
			if(Escala1 <= Escala2&&Escala1 <= Escala3){
				printf("Caso #%d: %.0d\n",i,Escala1);
			}
			else if(Escala2 <= Escala3&&Escala2 <= Escala1){
				printf("Caso #%d: %.0d\n",i,Escala2);
			}
			else if(Escala3 <= Escala2&&Escala3 <= Escala1){
				printf("Caso #%d: %.0d\n",i,Escala3);
			}
		}
		else if(Stringzin[1] == 'a'){
			if(Escala1 >= Escala2&&Escala1 >= Escala3){
				printf("Caso #%d: %.0d\n",i,Escala1);
			}
			else if(Escala2 >= Escala3&&Escala2 >= Escala1){
				printf("Caso #%d: %.0d\n",i,Escala2);
			}
			else if(Escala3 >= Escala2&&Escala3 >= Escala1){
				printf("Caso #%d: %.0d\n",i,Escala3);
			}	
		}
		else if(Stringzin[1] == 'y'){
			EscalaTotal = ((30*Escala1)+(59*Escala2)+(11*Escala3))/100;
			printf("Caso #%d: %.0d\n",i,EscalaTotal);
		}
		else if(Stringzin[1] == 'e'){
			EscalaTotal = (Escala1+Escala2+Escala3)/3;
			printf("Caso #%d: %.0d\n",i,EscalaTotal);	
		}
		++i;
	}
	return 0;
}