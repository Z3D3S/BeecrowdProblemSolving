#include<stdio.h>

int main(){
	int k,i,j,Numero_Inicial_Abas,Numero_De_interacao,Numero_De_Abas;
	char StringTeste1[10],String1[] = "fechou",String2[] = "clicou";
	scanf("%d",&Numero_Inicial_Abas);
	scanf("%d",&Numero_De_interacao);
	while(getchar() != '\n');
	Numero_De_Abas = Numero_Inicial_Abas;
	++Numero_De_interacao;
	while(--Numero_De_interacao){
		scanf("%[^\n]",StringTeste1);
		while(getchar() != '\n');
		k = 0;
		j = 0;
		for(i = 0;i < 6;++i){
			if(StringTeste1[i] == String1[i]){
				++j;
			}
			if(StringTeste1[i] == String2[i]){
				++k;
			}
		}
		if(j == i){
			Numero_De_Abas = Numero_De_Abas + 1;
		}
		if(k == i){
			Numero_De_Abas = Numero_De_Abas - 1;
		}
	}
	printf("%d\n",Numero_De_Abas);
	return  0;
}