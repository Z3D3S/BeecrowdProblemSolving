#include <stdio.h>
int main() {
typedef struct{
	char coroy;
	float Quantidade;
}__attribute__((packed)) experiencias_t;
	experiencias_t Xis[1000000];
	char  G = '%';
	int X,i;
	float PQC,PQR,PQS,QS = 0,QR = 0,QC = 0,QT = 0;
	scanf("%d",&X);
	for(i = 0;i < X;++i){
		scanf("%f %c",&Xis[i].Quantidade,&Xis[i].coroy);
		if(Xis[i].coroy == 'S'){
			QS += Xis[i].Quantidade;
		}
		if(Xis[i].coroy == 'R'){
			QR += Xis[i].Quantidade;	
		}
		if(Xis[i].coroy == 'C'){
			QC += Xis[i].Quantidade;
		}
		QT += Xis[i].Quantidade;
	}
	PQC = (QC/QT)*100;
	PQS = (QS/QT)*100;
	PQR = (QR/QT)*100;
	printf("Total: %.0f cobaias\n",QT);
	printf("Total de coelhos: %.0f\n",QC);
	printf("Total de ratos: %.0f\n",QR);
	printf("Total de sapos: %.0f\n",QS);
	printf("Percentual de coelhos: %.2f %c\n",PQC,G);
	printf("Percentual de ratos: %.2f %c\n",PQR,G);
	printf("Percentual de sapos: %.2f %c\n",PQS,G);
    return 0;
}