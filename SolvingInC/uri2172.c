#include <stdio.h>

int main() {
	int X = 1;
	long long int M = 1;
	while(1){
	scanf("%d",&X);
	scanf("%lld",&M);
	if(X == 0&&M ==0){
		break;
	}
	M = M*X;
	printf("%lld\n",M);
	}
	
	return 0;
}