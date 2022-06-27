#include <stdio.h>

int main() {
	int X,Saque,Bloqueio,Ataque,AtaqueSucedido,BloqueioSucedido,SaqueSucedido;
	double PorcentagemSaque,PorcentagemBloqueio,PorcentagemAtaque,Total_de_Saque_Sucedido = 0,Total_de_Bloqueio_Sucedido = 0,Total_de_Ataque_Sucedido = 0,Total_de_Bloqueio = 0,Total_de_Saque= 0,Total_de_Ataque = 0;
	char Nome[10000],tifu = '%';
	scanf("%d",&X);
	while(getchar() != '\n');
	++X;
	while(--X){
		scanf("%[^\n]",Nome);
		while(getchar() != '\n');
		scanf("%d %d %d",&Saque,&Bloqueio,&Ataque);
		scanf("%d %d %d",&SaqueSucedido,&BloqueioSucedido,&AtaqueSucedido);
		while(getchar() != '\n');
		Total_de_Saque += Saque;
		Total_de_Saque_Sucedido += SaqueSucedido;
		Total_de_Bloqueio += Bloqueio;
		Total_de_Bloqueio_Sucedido += BloqueioSucedido;
		Total_de_Ataque += Ataque;
		Total_de_Ataque_Sucedido += AtaqueSucedido;
		PorcentagemSaque = (Total_de_Saque_Sucedido*100)/Total_de_Saque;
		PorcentagemBloqueio = (Total_de_Bloqueio_Sucedido*100)/Total_de_Bloqueio;
		PorcentagemAtaque = (Total_de_Ataque_Sucedido*100)/Total_de_Ataque;
	}
	printf("Pontos de Saque: %.2lf %c.\n", PorcentagemSaque,tifu);
	printf("Pontos de Bloqueio: %.2lf %c.\n",PorcentagemBloqueio,tifu);
	printf("Pontos de Ataque: %.2lf %c.\n",PorcentagemAtaque,tifu);
	

	return 0;
}