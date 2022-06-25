#include <stdio.h>
int main() {
	int caque[10000],caqui[10000],f,k = 0,C[1000][1000],X,i,Y,aux,V[10000],cont = 0;
	for(X = 1,Y= 1,f = 0;X >= 0&&Y >= 0;++f){
		V[f] = 0;
		scanf("%d",&X);
		scanf("%d",&Y);
		if(X <= 0||Y <= 0){
			break;
		}
		if(X > Y){
			aux = X;
			X = Y;
			Y = aux;
		}
		if(X == Y){
			V[f] = X;
			C[f][k] = X;
		}
		for(i = X;(i <= Y)&&(X != Y);++i,++k){
			C[f][k] = i;
			V[f] += i;
		}
		++cont;
		caqui[f] = f+1;
		caque[f] = k+1;
	}
	for(f = 0;(f < caqui[f])&&cont != 0;++f,--cont){
		for(k = 0;k < caque[f];++k){
			if(C[f][k] != 0){
				printf("%d ",C[f][k]);
			}
		}
		printf("Sum=%d\n",V[f]);
	}
    return 0;
}