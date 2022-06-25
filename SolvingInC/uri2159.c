#include<stdio.h>
#include<math.h>

int main(){
	double const X = 1.25506;
	double P,M,logaritmo_natural,n;
	scanf("%lf",&n);
	logaritmo_natural = log(n);
	P = n/logaritmo_natural;
	M = P*X;
	printf("%.1lf %.1lf\n",P,M);


	return 0;
}