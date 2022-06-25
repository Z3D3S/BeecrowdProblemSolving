#include <stdio.h>
 
int main() {
	int i,A,N,Somatorio = 0;
	scanf("%d",&A);
	scanf("%d",&N);
	while(N <= 0){
		scanf("%d",&N);
	}
	for(i = 0;i < N;++i){
		Somatorio += (A+i);
	}
	printf("%d\n",Somatorio);
    return 0;
}