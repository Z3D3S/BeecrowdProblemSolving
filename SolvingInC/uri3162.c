#include <stdio.h>
#include <math.h>

int main() {
	int i,j,N;
	scanf("%d",&N);
	double maiorcomp,dist,X[200],Y[200],Z[200],matriz[200][200];
	for(i = 0; i < N;++i){
		scanf("%lf %lf %lf",&X[i],&Y[i],&Z[i]);
	}
	for(i = 0;i < N;++i){
		for(j = 0;j < N;++j){
			if(i != j){
				dist = (X[i]-X[j])*(X[i]-X[j])+(Y[i]-Y[j])*(Y[i]-Y[j])+(Z[i]-Z[j])*(Z[i]-Z[j]);
				dist = sqrt(dist);
				matriz[i][j] = dist;
			}
		}
	}
	for(i = 0;i < N;++i){
		maiorcomp = 1000000000;
		for(j = 0;j < N;++j){
			if(maiorcomp > matriz[i][j]&&i != j){
				maiorcomp = matriz[i][j];
			}
		}
		if(maiorcomp <= 20){
			printf("A\n");
		}
		else if(maiorcomp > 20&&maiorcomp <= 50){
			printf("M\n");
		}
		else{
			printf("B\n");
		}
	}
	return 0;
}