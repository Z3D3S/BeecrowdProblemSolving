#include <stdio.h>
 
int main() {
	int j,caqui,i;
	float X[100],Y[100],Z[100];
	for(i = 0,j=0;i<100;++i){
		scanf("%f",&X[i]);
		if(X[i] <= 10){
			Y[j] = i;
			Z[j] = X[i];
			++j;
		}
	}
	caqui = j;
	for(j = 0;j < caqui;++j){
		printf("A[%.0f] = %.1f\n",Y[j],Z[j]);
	}

    return 0;
}