#include<stdio.h>
int main(){
	int j,i,N,M,X = 0,Y = 0;
	int V[1000][1000];
	scanf("%d",&N);
	scanf("%d",&M);
	for(i = 0;i < N;++i){
		for(j = 0;j < M;++j){
			scanf("%d",&V[i][j]);
		}
	}
	for(i = 0;i < N;++i){
		for(j = 0;j < M;++j){
			if(V[i][j]==42&&V[i][j-1]==7&&V[i-1][j-1]==7&&V[i-1][j]==7&&V[i-1][j+1]==7&&V[i][j+1]==7&&V[i+1][j+1]==7&&V[i+1][j]==7&&V[i+1][j-1]==7){
				X = i+1;
				Y = j+1;
			}
		}
	}
	printf("%d %d\n",X,Y);
	return 0;
}