#include<stdio.h>
double fracao_continuada(double *n){
	if(*n == 0){
		return 0;
	}
	else{
		-- *n;
		return 1.0/(6.0+fracao_continuada(n));
	}
}
int main(){
	double n,Number;
	scanf("%lf",&n);
	Number = 3.0 + fracao_continuada(&n);
	printf("%.10lf\n",Number);
	return 0;
}



