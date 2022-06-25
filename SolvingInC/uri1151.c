#include <stdio.h>
int main() {
	int N,i;
	scanf("%d",&N);
  int fib[46];
  fib[0] = 0;
  fib[1] = fib[2] = 1;
  for(i = 3; i <= 45; ++i){ 
    fib[i] = fib[i-1] + fib[i-2];
  } 
  for(i = 0; i < N;++i){
    printf("%d",fib[i]);
    if(i < N-1){
      printf(" ");
    }
  }
  printf("\n");

  return 0;
}