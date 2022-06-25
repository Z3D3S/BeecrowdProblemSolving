#include <stdio.h>
 
int main() {
	int Y,i,X[10];
	scanf("%d",&Y);
	for(i = 0;i<10;++i){
		if(i == 0){
			X[i] = Y;
		}
		else{
			X[i] = 2*X[i-1];
		}
	}
	for(i = 0;i< 10;++i){
		printf("N[%d] = %d\n",i,X[i]);
	}

    return 0;
}