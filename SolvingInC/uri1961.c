#include <stdio.h>

int main(){
	int Result,cont,i = 0,X,Altura_Pulo,Qnt_Pulos,Canos[100];
	scanf("%d %d",&Altura_Pulo,&Qnt_Pulos);
	++Qnt_Pulos;
	while(--Qnt_Pulos){
		scanf("%d",&X);
		Canos[i] = X;
		++i;
	}
	cont = i;
	for(i = 0;i < cont-1;++i){
		if((Canos[i] - Canos[i+1]) > (Altura_Pulo)||(Canos[i] - Canos[i+1]) < (Altura_Pulo*-1)){
			Result = 0;
			break;
		}
		else{
			Result = 1;
		}
	}
	if(Result == 0){
		printf("GAME OVER\n");
	}
	else{
		printf("YOU WIN\n");
	}
	return 0;
}