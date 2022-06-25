#include <stdio.h>
 
int main() {
	int X,Num[10000],i;
 	scanf("%d",&X);
 	for(i = 0;i < X;++i){
 		scanf("%d",&Num[i]);
 	}
 	for(i = 0;i < X;++i){
	 	if(Num[i] == 0){
	 		printf("NULL\n");
	 	}
	 	if((Num[i] % 2 == 0)&&Num[i] != 0){
			printf("EVEN ");
	 	}
	 	if((Num[i] % 2 != 0)&&Num[i] != 0){
	 		printf("ODD ");
	 	}
	 	if(Num[i] < 0){
	 		printf("NEGATIVE\n");
	 	}
	 	else if(Num[i] > 0){
	 		printf("POSITIVE\n");
	 	}
 	}
    return 0;
}