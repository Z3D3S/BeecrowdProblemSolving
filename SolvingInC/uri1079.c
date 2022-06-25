#include <stdio.h>
 
int main() {
	int X,i,j;
	float Xis[3],Vaca[1000000];
	scanf("%d",&X);
	for(i = 0;i < X;++i){
		for(j = 0;j < 3;++j){
			scanf("%f",&Xis[j]);
			if(j == 0){
			Vaca[i] += Xis[j]*2;
			}
			if(j == 1){
			Vaca[i] += Xis[j]*3;
			}
			if(j == 2){
			Vaca[i] += Xis[j]*5;
			}
		}
	}
	for(i = 0;i < X;++i){
		printf("%.1f\n",Vaca[i]/10.0);
	}
    return 0;
}