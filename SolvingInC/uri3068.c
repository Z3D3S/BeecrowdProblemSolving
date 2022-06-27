#include <stdio.h>

int main() {
	int X1,X2,Y1,Y2,Xm,Ym,N,meteorin,cont = 1;
	while(1){
		scanf("%d %d %d %d",&X1,&Y1,&X2,&Y2);
		if(X1 == 0&&X2 == 0&&Y1 == 0&&Y2 == 0){
			break;
		}
		scanf("%d",&N);
		meteorin = 0;
		while((--N) >= 0){
			scanf("%d %d",&Xm,&Ym);
			if(Xm >= X1&&Xm <=X2&&Ym >= Y2&&Ym <= Y1){
				++meteorin;
			}
		}
		printf("Teste %d\n",cont);
		printf("%d\n",meteorin);
		++cont;
	}

	return 0;
}