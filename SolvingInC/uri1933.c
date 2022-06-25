#include <stdio.h>

int main(){
	int X,Y;
	scanf("%d %d",&X,&Y);
	if(X != Y){
		if(X > Y){
			printf("%d\n",X);
		}
		else{
			printf("%d\n",Y);
		}
	}
	else{
		printf("%d\n",X);
	}

	return 0;
}