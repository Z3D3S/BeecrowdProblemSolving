#include <stdio.h>
int main() {
	int caqui,parada,X,k = 0,j,i,Y,Somatorio,V[10000];
	scanf("%d",&parada);
	++parada;
	while(--parada){
		Somatorio = 0;
		scanf("%d",&X);
		scanf("%d",&Y);
		for(i = X,j = Y;j > 0;++i){
			if(i % 2 != 0){
				Somatorio += i;
				--j;
			}
			V[k] = Somatorio;
		}
		++k;
	}
	caqui = k;
	for(k = 0; k < caqui;++k){
		printf("%d\n",V[k]);
	}
    return 0;
}