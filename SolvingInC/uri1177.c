#include <stdio.h>
 
int main() {
	int X,j,i,V[1000];
	scanf("%d",&X);
	for(i = 0,j=0;j < 1000;++i,++j){
		if(i == X){
			i = 0;
		}
		V[j] = i;
	}
	for(j = 0;j < 1000;++j){
		printf("N[%d] = %d\n",j,V[j]);
	}
 
    return 0;
}