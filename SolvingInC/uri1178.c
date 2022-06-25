#include <stdio.h>
 
int main() {
	int i,j;
	double X,N[100];
	scanf("%lf",&X);
	for(i=0,j=-1;i < 100;++i,++j){
		if(i == 0){
			N[i] = X;
		}
		else if(i >= 1){
			N[i] = (N[j]/2.0);
		}
	}
	for(i = 0;i< 100;++i){
		printf("N[%d] = %.4lf\n",i,N[i]);
	}
    return 0;
}