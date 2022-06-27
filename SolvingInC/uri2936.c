#include <stdio.h>

int main() {
	int X1,X2,X3,X4,X5,mandiocas = 0;
	scanf("%d %d %d %d %d",&X1,&X2,&X3,&X4,&X5);
	mandiocas = 300*X1+1500*X2+600*X3+1000*X4+150*X5+225;
	printf("%d\n",mandiocas);

	return 0;
}