#include <stdio.h>

int main() {
	int N;
	double X,comp;
	while(scanf("%d",&N) != EOF){
		comp = 1000;
		while((--N) >= 0){
			scanf("%lf",&X);
			if(X < comp){
				comp = X;
			}
		}
		printf("%.2lf\n",comp);
	}
	

	return 0;
}