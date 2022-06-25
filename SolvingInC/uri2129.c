#include<stdio.h>

int main(){
	int Natal,Dia,Mes,M_6,M_9,M_4,M_11,M_2,M_1,M_5,M_3,M_7,M_8,M_10,Dias_Total;
	while(scanf("%d %d",&Mes,&Dia) != EOF){
		Dias_Total = 0;
		Natal = 25;
		M_6 = M_9 = M_4 = M_11 = 30;
		M_2 = 29;
		M_1 = M_5 = M_3 = M_7 = M_8 = M_10 = 31;

		if(Dia > 25&&Mes >= 12){
			printf("Ja passou!\n");
		}
		else if(Dia == 24&&Mes == 12){
			printf("E vespera de natal!\n");
		}
		else if(Dia == 25&&Mes == 12){
			printf("E natal!\n");
		}
		else{
			if(Mes == 1){
				Dias_Total = M_1+M_2+M_3+M_4+M_5+M_6+M_7+M_8+M_9+M_10+M_11+Natal-Dia; 
			}
			else if(Mes == 2){
				Dias_Total = M_2+M_3+M_4+M_5+M_6+M_7+M_8+M_9+M_10+M_11+Natal-Dia;
			}
			else if(Mes == 3){
				Dias_Total = M_3+M_4+M_5+M_6+M_7+M_8+M_9+M_10+M_11+Natal-Dia;
			}
			else if(Mes == 4){
				Dias_Total = M_4+M_5+M_6+M_7+M_8+M_9+M_10+M_11+Natal-Dia;
			}
			else if(Mes == 5){
				Dias_Total = M_5+M_6+M_7+M_8+M_9+M_10+M_11+Natal-Dia;
			}
			else if(Mes == 6){
				Dias_Total = M_6+M_7+M_8+M_9+M_10+M_11+Natal-Dia;
			}
			else if(Mes == 7){
				Dias_Total = M_7+M_8+M_9+M_10+M_11+Natal-Dia;
			}
			else if(Mes == 8){
				Dias_Total = M_8+M_9+M_10+M_11+Natal-Dia;
			}
			else if(Mes == 9){
				Dias_Total = M_9+M_10+M_11+Natal-Dia;
			}
			else if(Mes == 10){
				Dias_Total = M_10+M_11+Natal-Dia;
			}
			else if(Mes == 11){
				Dias_Total = M_11+Natal-Dia;
			}
			else if(Mes == 12){
				Dias_Total = Natal-Dia;
			}
			printf("Faltam %d dias para o natal!\n",Dias_Total);
		}
	}	
	return 0;
}