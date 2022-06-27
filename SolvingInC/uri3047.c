#include <stdio.h>

int main() {
	int Mae,filho1,filho2,filho3;
	scanf("%d",&Mae);
	scanf("%d",&filho1);
	scanf("%d",&filho2);
	filho3 = Mae-filho1-filho2;
	if(filho3 >= filho2&&filho3 >= filho1){
		printf("%d\n",filho3);
	}
	else if(filho2 >= filho1&&filho2 >= filho3){
		printf("%d\n",filho2);
	}
	else{
		printf("%d\n",filho1);
	}
	return 0;
}