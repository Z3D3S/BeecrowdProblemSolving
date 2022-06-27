#include <stdio.h>
#include <math.h>

int main() {
	int H,M,i,Qt,Tempo;
	double X[100100],Media,Desvio;
	while(scanf("%d %d",&H,&M) != EOF){
		Tempo = H*60;
		i = 0;
		Media = 0;
		while(Tempo >= M){
			scanf("%lf",&X[i]);
			Media = Media + X[i];
			Tempo = Tempo - M;
			++i;
		}
		Qt = i;
		Media = Media/Qt;
		Desvio = 0;
		for(i = 0; i < Qt;++i){
			Desvio = Desvio + pow((X[i]-Media),2);
		}
		Desvio = Desvio/(Qt-1);
		printf("%.5lf\n",sqrt(Desvio));
	}
	return 0;
}