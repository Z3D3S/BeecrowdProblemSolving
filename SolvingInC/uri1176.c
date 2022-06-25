#include <stdio.h>

int main() {
	int j,i = 0,T,k;
  unsigned long long int N,V[100],X[100],F[60];
  scanf("%d",&T);
  ++T;
  F[0] = 0;
    F[1] = 1;
  while(--T){
  	scanf("%lld",&N);
    for(k = 2;k <= N;++k){
      F[k] = F[k-1]+F[k-2];
    }
    if(N == 0){
      V[i] = 0;
    }
    else if(N == 1){
      V[i] = 1;
    }
    else{
      V[i] = F[k-1];
    }
    X[i] = N;
    printf("Fib(%lld) = %lld\n",X[i],V[i]);
    ++i;
  }
  return 0;
}