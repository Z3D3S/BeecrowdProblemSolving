#include <stdio.h>

int main() {
	int M;
	double N,C,Somatorio1,Somatorio2,SomatorioT;
	while(scanf("%d",&M) != EOF){
		++M;
		Somatorio1 = 0;
		Somatorio2 = 0;
		while(--M){
			scanf("%lf %lf",&N,&C);
			Somatorio1 = Somatorio1 + (N*C);
			Somatorio2 = Somatorio2 + C;
		}
		Somatorio2 *= 100;
		SomatorioT = Somatorio1/Somatorio2;
		printf("%.4lf\n",SomatorioT);
	}
	return 0;
}