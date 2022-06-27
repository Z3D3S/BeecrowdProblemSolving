#include <stdio.h>
int main() {
	int N,i,j,number;
	scanf("%d",&N);
  int fib[100];
  fib[1] = fib[0] = 1;
  for(i = 2; i <= 45; ++i){ 
    fib[i] = fib[i-1] + fib[i-2];
  } 
  i = 0;
  j = 3;
  number = 2;
  while(i < N){
    ++number;
    if(fib[j] == number){
      ++j;
    }
    else if(number < fib[j]){
      ++i;
    }
  }
  printf("%d\n",number);
  return 0;
}