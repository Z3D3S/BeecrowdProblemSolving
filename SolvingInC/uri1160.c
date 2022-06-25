#include <stdio.h>
 
int main() {
	int caqui,K = 0,PA,PB,X,i;
	double TXA,TXB;
	scanf("%d",&X);
	int anos[10000];
	++X;
	while(--X){
		i = 0;
		scanf("%d %d",&PA,&PB);
		scanf("%lf %lf",&TXA,&TXB);
		while((PA <= PB)&&i <= 101){
			PA = (PA + ((TXA*PA)/100));
			PB = (PB + ((TXB*PB)/100));
			++i;
			anos[K] = i;
		}
		++K;
	}
	caqui = K;
	for(K = 0;K < caqui ;++K){
		if(anos[K] > 100){
			printf("Mais de 1 seculo.\n");
		}
		else{
			printf("%d anos.\n",anos[K]);
		}
	}
    return 0;
}