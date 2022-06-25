#include <stdio.h>
int main() {
	int K,f;
	float X,Y,V[10000];
	char CATCH[10000];
	scanf("%d",&K);
	for(f = 0;f < K;++f){
		scanf("%f",&X);
		scanf("%f",&Y);
		CATCH[f] = '0';
		if(Y != 0){
			V[f] = X/Y;
		}
		else{
			CATCH[f] = '1'; 
		}
	}
	for(f = 0;f < K;++f){
		if(CATCH [f] == '0'){
			printf("%.1f\n",V[f]);
		}
		else{
			printf("divisao impossivel\n");
		}
	}
    return 0;
}