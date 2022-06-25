#include <stdio.h>
 
int main() {
	int i,X[20],aux,j;
	for(i = 0;i<20;++i){
		scanf("%d",&X[i]);
	}
	j = i-1;
	for(i = 0,j=j;i < j;++i,--j){
		aux = X[i];
		X[i] = X[j];
		X[j] = aux;
	}
	for(i = 0;i< 20;++i){
		printf("N[%d] = %d\n",i,X[i]);
	}

    return 0;
}