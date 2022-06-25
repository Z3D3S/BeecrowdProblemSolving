#include<stdio.h>

int main(){
	int V[5],X,i,Cont = 0;
	scanf("%d",&X);
	for(i=0;i < 5;++i){
		scanf("%d",&V[i]);
	}
	for(i=0;i<5;++i){
		if(V[i] == X){
			++Cont;
		}
	}
	printf("%d\n",Cont);
	return 0;
}