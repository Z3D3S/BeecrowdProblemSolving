#include <stdio.h>

int main(){
	int X,Y,Q,tecn,Result;
	Y = 2014;
	scanf("%d",&X);
	++X;
	while(--X){
		scanf("%d",&Q);
		Result  = Q-Y;
		if(Result <= 0){
			Result *= -1;
			++Result;
			tecn = 1;
		}
		else{
			tecn = 0;
		}
		printf("%d ",Result);
		if(tecn == 1){
			printf("D.C.\n");
		}
		else{
			printf("A.C.\n");
		}
	}
	return 0;
}