#include <stdio.h>
 
int main() {
	float A,Media = 0;
	int Cont = 0, f = 0,caqui;
	while(Cont < 2){
		scanf("%f",&A);
		if(A <= 10 && A >= 0){
			Media += A;
			++Cont;
		}
		else{
			++f;
		}
	}
	caqui = f;
	for(f = 0;f < caqui;++f){
			printf("nota invalida\n");
	}
	printf("media = %.2f\n",Media/Cont);
 
    return 0;
}