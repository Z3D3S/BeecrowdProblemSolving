#include <stdio.h>

int refrizins(int* refri,int promo){
	int latanova = 0;
	while((*refri) >= promo){
		(*refri) -= promo;
		++latanova;
	}
	return latanova;
}
int main() {
	int X1,X2,N,latin;
	scanf("%d",&N);
	while((--N) >= 0){
		scanf("%d %d",&X1,&X2);
		latin = refrizins(&X1,X2);
		printf("%d\n",(latin+X1));
	}
	return 0;
}