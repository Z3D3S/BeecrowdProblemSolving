#include <stdio.h>

int main() {
	int T,N,i,cont1,cont2,cont3,cont4,cont5,cont6,cont7,VitaminaC;
	char Alimento[20],Tabela1[] = "suco de laranja",Tabela2[] = "morango fresco",Tabela3[] = "mamao",Tabela4[] = "goiaba vermelha",Tabela5[] = "manga",Tabela6[] = "laranja",Tabela7[] = "brocolis";
	while(1){
		scanf("%d",&T);
		while(getchar() != '\n');
		if(T == 0){
			break;
		}
		++T;
		VitaminaC = 0;
		while(--T){
			cont1 = 0,cont2 = 0,cont3 = 0,cont4 = 0,cont5 = 0,cont6 = 0,cont7 = 0;
			scanf("%d %[^\n]",&N,Alimento);
			for(i = 0 ; Alimento[i] != '\0';++i){
				if(Alimento[i] == Tabela1[i]){
					++cont1;
				}
				if(Alimento[i] == Tabela2[i]){
					++cont2;
				}
				if(Alimento[i] == Tabela3[i]){
					++cont3;
				}
				if(Alimento[i] == Tabela4[i]){
					++cont4;
				}
				if(Alimento[i] == Tabela5[i]){
					++cont5;
				}
				if(Alimento[i] == Tabela6[i]){
					++cont6;
				}
				if(Alimento[i] == Tabela7[i]){
					++cont7;
				}
			}
			if(cont1 == 15){
				VitaminaC = VitaminaC + 120*N;
			}
			else if(cont2 == 14){
				VitaminaC = VitaminaC + 85*N;
			}
			else if(cont3 == 5){
				VitaminaC = VitaminaC + 85*N;
			}
			else if(cont4 == 15){
				VitaminaC = VitaminaC + 70*N;
			}
			else if(cont5 == 5){
				VitaminaC = VitaminaC + 56*N;
			}
			else if(cont6 == 7){
				VitaminaC = VitaminaC + 50*N;
			}
			else if(cont7 == 8){
				VitaminaC = VitaminaC + 34*N;
			}
		}
		if(VitaminaC > 130){
			printf("Menos %d mg\n",VitaminaC - 130);
		}
		else if(VitaminaC < 110){
			printf("Mais %d mg\n",110 - VitaminaC);
		}
		else{
			printf("%d mg\n",VitaminaC);
		}
	}
	

	return 0;
}