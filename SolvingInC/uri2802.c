#include <stdio.h>

int main() {
	int n,i;
	long long int soma,F;
	scanf("%d",&n);
	F = 1;
	soma = 1;
	for(i = 0;i < 2;++i){
		soma *= (n-i); 
	}
	soma /= 2;
	F = F + soma;
	if(n >= 4){
	soma = 1;
	for(i = 0;i < 4;++i){
		soma *= (n-i);
	}
	soma /= 24;
	F = F + soma;
	}
	printf("%lld\n",F);
	

	return 0;
}