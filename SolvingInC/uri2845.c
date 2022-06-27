#include <stdio.h>

void swap(long long int*a,long long int*b){
	int aux;
	aux = (*b);
	(*b) = (*a);
	(*a) = aux;
}
int mdc(long long int m,long long int n){
	while(m){
	n %= m;
	swap(&n,&m);
	}
	return n;
}
int main() {
	long long int i,N,A[10100],compzin = -1,n;
	scanf("%lld",&N);
	for(i = 0;i < N;++i){
		scanf("%lld",&A[i]);
		if(compzin < A[i]){
			compzin = A[i];
		}
	}
	++compzin;
	for(i = 0;i < N;++i){
		if((n = mdc(A[i],compzin)) != 1){
			i = -1;
			++compzin;
		}
		if(i == 3){
			break;
		}
	}
	printf("%lld\n",compzin);
	return 0;
}