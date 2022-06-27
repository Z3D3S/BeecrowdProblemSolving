#include <stdio.h>

int main() {
	long long int N;
	int i;
	while(scanf("%lld",&N) != EOF){
		i =0;
		while(N % 2 == 0){
			N = N/2;
			++i;
		}
		printf("%d\n",i);
	}
	return 0;
}