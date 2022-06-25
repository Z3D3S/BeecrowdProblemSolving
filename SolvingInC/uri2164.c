#include <stdio.h>
#include <math.h>

int main() {
	int n;
	double Fibonacci;
	scanf("%d",&n);
	Fibonacci = ( pow((1+sqrt(5))/2, n)- pow((1-sqrt(5))/2, n))/sqrt(5);
	printf("%.1lf\n",Fibonacci);
	return 0;
}