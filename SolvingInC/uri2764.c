#include <stdio.h>

int main() {
	int i;
	char Dia[5],Mes[5],Ano[5],Data[20];
	scanf("%s",Data);
	for(i = 0;Data[i] != '\0';++i){
		if(i >=0&& i <= 1){
			Dia[i] = Data[i];
		}
		else if(i == 2){
			Dia[i] = '\0';
		}
		else if(i >=3&& i <= 4){
			Mes[i-3] = Data[i];
		}
		else if(i == 5){
			Mes[i-3] = '\0';
		}
		else if(i >=6&& i <= 7){
			Ano[i-6] = Data[i];
		}
		if(i == 8){
			Ano[i-6] = '\0';
		}
	}
	printf("%s/%s/%s\n",Mes,Dia,Ano);
	printf("%s/%s/%s\n",Ano,Mes,Dia);
	printf("%s-%s-%s\n",Dia,Mes,Ano);
	return 0;
}