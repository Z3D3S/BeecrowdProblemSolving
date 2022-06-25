#include <stdio.h>
 
int main() {
	int X,R1,R2,R3,i;
	scanf("%d",&X);
	for(i = 0;i < X;++i){
		scanf("%d %d",&R1,&R2);
		R3 = R1+R2;
		printf("%d\n",R3);
	}

    return 0;
}