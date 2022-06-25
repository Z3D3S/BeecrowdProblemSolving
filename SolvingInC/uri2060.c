#include<stdio.h>

int main(){
	int X,multiplo2 = 0,multiplo3 = 0,multiplo4 = 0,multiplo5 = 0,N;
	scanf("%d",&N);
	++N;
	while(--N){
		scanf("%d",&X);
		if(X % 2 == 0){
			++multiplo2;
		}
		if(X % 3 == 0){
			++multiplo3;
		}
		if(X % 4 == 0){
			++multiplo4;
		}
		if(X % 5 == 0){
			++multiplo5;
		}
	}
	printf("%d Multiplo(s) de 2\n",multiplo2);
	printf("%d Multiplo(s) de 3\n",multiplo3);
	printf("%d Multiplo(s) de 4\n",multiplo4);
	printf("%d Multiplo(s) de 5\n",multiplo5);
	
	return  0;
}