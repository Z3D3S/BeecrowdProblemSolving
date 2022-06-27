#include <stdio.h>
int main() {
	int N,i;
	scanf("%d",&N);
  int fib[100];
  fib[1] = fib[0] = 1;
  for(i = 2; i <= 45; ++i){ 
    fib[i] = fib[i-1] + fib[i-2];
  } 
  for(i = N-1; i >= 0;--i){
    printf("%d",fib[i]);
    if(i > 0){
      printf(" ");
    }
  }
  printf("\n");

  return 0;
}