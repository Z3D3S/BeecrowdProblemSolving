#include <stdio.h>
#include <math.h>

int main() {
	long long int X[1000100],N,SomaR,SomaG,i,aux,aux2;

	while(scanf("%lld",&N) != EOF){
		SomaG = 0;
		SomaR = 0;
		aux = 0;
		aux2 = 0;
		for(i = 0;i < N;++i){
			scanf("%lld",&X[i]);
			SomaG = SomaG + X[i];
		}
		i = 0;
		while(aux >= aux2&&i < N){
			aux = fabs(SomaG - SomaR);
			SomaR = SomaR + X[i];
			SomaG = SomaG - X[i];
			++i;
			aux2 = fabs(SomaG - SomaR);
		}
		printf("%lld\n",aux);
	}


	

	return 0;
}