#include <stdio.h>
#include <math.h>

int main() {
	int N;
	double number,expo,resu;
	scanf("%d",&N);
	while((--N) >= 0){
		scanf("%lf %lf",&number,&expo);
		resu = expo*log10(number)+1;
		resu = floor(resu);
		printf("%.lf\n",resu);
	}

	return 0;
}