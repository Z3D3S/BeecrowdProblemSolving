#include <stdio.h>

int main() {
	unsigned long long int MatrizM[110][110],MatrizL[110][110];
	int j,i,N,M,L,Cm,A,Cl;
	while(scanf("%d",&N) != EOF){
		scanf("%d %d",&M,&L);
		for(i=1;i<= M;++i){
			for(j =1;j <= N;++j){
				scanf("%llu",&MatrizM[i][j]);
			}
		}
		for(i=1;i<= L;++i){
			for(j =1;j <= N;++j){
				scanf("%llu",&MatrizL[i][j]);
			}
		}
		scanf("%d",&Cm);
		scanf("%d",&Cl);
		scanf("%d",&A);
		if(MatrizM[Cm][A] > MatrizL[Cl][A]){
			printf("Marcos\n");
		}
		else if(MatrizM[Cm][A] < MatrizL[Cl][A]){
			printf("Leonardo\n");
		}
		else{
			printf("Empate\n");
		}

	}
	return 0;
}